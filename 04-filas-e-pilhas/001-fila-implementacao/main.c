#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h> // malloc

struct pessoa
{
    int senha;
    struct pessoa *prox;
    
};

typedef struct pessoa Pessoa;

Pessoa *fila;

void add(int senha)
{
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
    p->senha = senha;
    p->prox = NULL;

    if(fila==NULL){ // caso seja a primeira pessoa da lista
        fila = p;
    }else{
        Pessoa *filaAux = fila;
        while (filaAux->prox!=NULL)
        {
           filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
}

void rem(){
    if(fila==NULL){
        printf("Fila vazia");
    }else{
        fila = fila->prox;
    }
}

void imprime(Pessoa *f)
{
    if(f!=NULL)
    {
        printf("\nSenha da Pessoa: %d", f->senha);
        imprime(f->prox);
    }
}

int main(){

    add(5);
    add(6);
    add(7);
    add(8);

    Pessoa *filaAux = fila;
    imprime(filaAux);

    printf("\n");

    rem();
    filaAux = fila;
    imprime(filaAux);

    printf("\n");
    rem();
    filaAux = fila;
    imprime(filaAux);

    return 0;
}