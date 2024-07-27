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

void rem(Nodo *n, int valor)
{
    Nodo *filho = n;
    Nodo *pai;

    // procurar o valor dentro da arvore e obter o valor de pai e filho
    do{
        pai = filho;
        if(valor < filho->valor)
            filho = filho->esq;
        else if(valor > filho->valor)
            filho = filho->dir;
    }while(filho != NULL && filho->valor != valor);

    if(filho != NULL)
    {
        // CASO 1 - Nodo não tem filho
        if(filho->esq == NULL && filho->dir == NULL)
        {
            //qual ponteiro do pai? esq ou dir?
            if(pai->esq == filho) pai->esq = NULL;
            if(pai->dir == filho) pai->dir = NULL;  
        }

        // CASO 2 - Nodo tem 1 filho
        if(filho->esq != NULL && filho->dir == NULL) // Nodo filho tem 1 filho a esq
        {
            //qual ponteiro do pai? esq ou dir?
            if(pai->esq == filho) pai->esq = filho->esq;
            if(pai->dir == filho) pai->dir = filho->esq;
        } 
        if(filho->dir != NULL && filho->esq == NULL) // Nodo filho tem 1 filho a dir
        {
            //qual ponteiro do pai? esq ou dir?
            if(pai->esq == filho) pai->esq = filho->dir;
            if(pai->dir == filho) pai->dir = filho->dir;
        }

        // CASO 3 - Nodo tem 2 filhos
        if(filho->esq != NULL && filho->dir != NULL)
        {
            if(filho->esq->dir == NULL){ // Verificar se o mais a direita da esqueda é NULL, caso sim, o valor da esquedar se torna filho
                filho->valor = filho->esq->valor;
            }
            else // se não, percorrer os NODOS
            {
                Nodo *p = filho->esq;
                Nodo *aux = p;
                while(p->dir != NULL)
                {
                    aux = p;
                    p = p->dir;
                }
                aux->dir = NULL;
                filho->valor = p->valor;
            }
        }
    }
}

int main(){

    Nodo *root = create(5);

    add(root, 2);
    add(root, 1);
    add(root, 8);
    add(root, 4);

    rem(root, 1);

    imprimir(root);

    return 0;
}