#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h> // malloc

struct prato
{
    char cor;
    struct prato *prox;
    
};

typedef struct prato Prato;

Prato *pilha;

void add(char cor)
{
    Prato *p = (Prato*) malloc(sizeof(Prato));
    p->cor = cor;
    p->prox = pilha;
    pilha = p;
}   

void rem(){
    if(pilha==NULL){
        printf("Pilha vazia");
    }else{
        pilha = pilha->prox;
    }
}

void imprime(Prato *p)
{
    if(p!=NULL)
    {
        printf("\nCor de prato: %c", p->cor);
        imprime(p->prox);
    }
}

int main(void){

    add('v');
    add('a');
    add('b');
    add('p');

    rem();
    rem();
    rem();

    Prato *pilhaAux = pilha;

    imprime(pilhaAux);

    return 0;
}