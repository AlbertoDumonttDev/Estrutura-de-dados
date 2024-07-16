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

void addFirst(float x, float y)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;
    p->prox = listaPontos; // aponta para o próximo
    listaPontos = p; //aponta para o novo Ponto adicionado
}

void addLast(float x, float y)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;
    p->prox = NULL;

    // percorre a lista até o próximo elemento ser null
    if(listaPontos == NULL) {
        listaPontos = p;
    } else {
        Ponto *listAux = listaPontos;

        // percorre a lista
        while(listAux->prox!=NULL){
            listAux = listAux->prox; 
        }
        listAux->prox = p;
    }
}

void imprime()
{
    Ponto *auxLista = listaPontos;
    while(auxLista != NULL)
    {
        printf("Ponto(%.1f, %.1f)\n", auxLista->x, auxLista->y);
        auxLista = auxLista->prox;
    }
}

int main(){

    //FORMA DINAMICA
    addFirst(1,5);
    addFirst(2,7);
    addFirst(5,3);
    addLast(1,1);

    imprime();

    return 0;
}