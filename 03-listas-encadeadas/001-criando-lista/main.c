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
    p->prox = listaPontos; // aponta para o "anterior"
    listaPontos = p; //aponta para o novo Ponto adicionado

    //sempre que adicionar um novo elemento, ele vai para o começo da fila
}

int main(){

    //FORMA DINAMICA
    add(1,5);
    add(2,7);
    add(2,7);

    printf("%.0f", listaPontos->x);
    printf("%.0f", listaPontos->prox->x);
    printf("%.0f", listaPontos->prox->prox->x);


    // FORMA MANUAL

    // Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    // p->x = 1;
    // p->y = 5;

    // Ponto *p1 = (Ponto*) malloc(sizeof(Ponto));

    // p->x = 3;
    // p->y = 9;

    // Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));

    // p->x = 3;
    // p->y = 9;


    // p->prox = p1;
    // p1->prox = p2;
    // p2->prox = NULL;

    return 0;
}