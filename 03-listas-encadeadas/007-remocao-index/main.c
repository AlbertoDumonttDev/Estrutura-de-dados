#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h> // malloc
struct ponto
{
    float x;
    float y;
    struct ponto *prox; // ponteiro sempre apontando para a próxima
};

typedef struct ponto Ponto;

Ponto *listaPontos;


void imprime(Ponto *p)
{
    if(p!= NULL)
    {
        printf("\nPonto(%.1f,%.1f)", p->x, p->y);
        imprime(p->prox);
    }
}

int length = 0;

void addIndex(float x, float y, int index)
{   
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;

    if(index>length)
    {
        printf("Posicao invalida");
    }
    else
    {
        if(index==0)
        {
            p->prox = listaPontos; // antigo elemento passa a ser o segundo
            listaPontos = p; // o novo passa ser o primeiro
        }
        else
        {
            Ponto *listaAux = listaPontos;
            int i = 0;
            while (i!=index-1)
            {
                listaAux = listaAux->prox;
                i++;
            }
            p->prox = listaAux->prox;
            listaAux->prox = p;
        }
        length++;
    }
}

void removeIndex(int index)
{
    if(index>length || length == 0) //index invalido ou lista vazia
    {
        printf("Posicao invalida");
    }
    else
    {
        if(index==0)
        {
            listaPontos = listaPontos->prox; // caso a remoção seja no inicio
        }
        else{
            Ponto *listaAux = listaPontos;
            int i = 0;
            while (i!=index-1)
            {
                listaAux = listaAux->prox;
                i++;
            }
            listaAux->prox = listaAux->prox->prox; // redefinindo prox do elemnto anterior ao removido
        }
        length--;
    }
}

int main(){

    addIndex(1,1,0);
    addIndex(2,4,1);
    addIndex(4,16,2);
    addIndex(3,9,2);

    removeIndex(1);


    Ponto *auxLista = listaPontos;
    imprime(auxLista);

    return 0;
}