#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf

// declarando um ponteiro, ele precisa ser do mesmo tipo da varivavel
int *p;

int val = 5;

int main(){

    // atribuindo o endereço da variavel ao ponteiro
    p = &val;
    printf("O valor apontado por 'p': %d", *p); 
    
    return 0;
}