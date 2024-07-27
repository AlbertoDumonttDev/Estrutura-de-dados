#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h>

struct nodo
{
    int valor;
    struct nodo *esq;
    struct nodo *dir;
    
};

typedef struct nodo Nodo;

Nodo* create(int valor)
{   
    Nodo *n = malloc(sizeof(Nodo));
    n->valor = valor;
    n->esq = NULL;
    n->dir = NULL;

    return n;
}

void imprimir(Nodo *n) // irá percorrer a arvore a partir do nodo 5
{
    if(n==NULL) // quando se tem apenas uma linha após if, não é necessario chaves
        return;
    //imprimir(n->esq); será mostrado de forma linear a arvore obs: comentar proxima função imprime esq
    printf("\n%d",n->valor);
    //usando recursão
    imprimir(n->esq);
    imprimir(n->dir);
}

int main(){


    //Criar a arvores linear
    Nodo *nodo5 = create(5);
    Nodo *nodo2 = create(2);
    Nodo *nodo1 = create(1);
    Nodo *nodo8 = create(8);
    Nodo *nodo4 = create(4);
    nodo5->esq = nodo2;
    nodo2->esq = nodo1;
    nodo5->dir = nodo8;
    nodo2->dir = nodo4;

    imprimir(nodo5);

    return 0;
}