#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf

// Recursão nada mais é do que a chamada de uma função dentro da própria definição da função

int potencia(int base, int ep)
{
    if(ep==1){
        return base;
    }
    return base*potencia(base,ep-1);

    //base    ep
    //2         4
    //2         3
    //2         2
    //2         1

    //2*2*2*2 = 16
}

int main(){
    int v = potencia(2,4); // 16
    printf("%d", v);
    return 0;
}