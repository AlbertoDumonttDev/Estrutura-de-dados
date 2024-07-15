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

void add(float x, float y)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;
    p->prox = listaPontos; // aponta para o próximo
    listaPontos = p; //aponta para o novo Ponto adicionado
}

void imprime(Ponto *p)
{
    if(p!= NULL)
    {
        printf("\nPonto(%.1f,%.1f)", p->x, p->y);
        imprime(p->prox);
    }
}

int main(){

    //FORMA DINAMICA
    add(1,5);
    add(2,7);
    add(5,3);

    Ponto *auxLista = listaPontos;
    imprime(auxLista);

    return 0;
}