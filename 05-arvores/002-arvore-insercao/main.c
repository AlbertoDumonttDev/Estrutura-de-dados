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

void add(Nodo *n, int valor)
{
    //Nodo *n -> raiz
    if(valor < n->valor)
    {
        if(n->esq == NULL) // verifica se a esquerda do nodo está vazia
            n->esq = create(valor);// se for o nodo é inserido a esquerda
        else
            add(n->esq, valor); // se não, é chamada a recursão para tratar o próximo nodo
    }
    else
    {
        if(n->dir == NULL)
            n->dir = create(valor);
        else
            add(n->dir, valor);
    }
}

int main(){


    //Criar a arvores linear
    Nodo *root = create(5);

    add(root, 2);
    add(root, 1);
    add(root, 8);
    add(root, 4);

    imprimir(root);

    return 0;
}