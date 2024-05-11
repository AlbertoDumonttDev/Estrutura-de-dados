#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int main(){
    
    SetConsoleOutputCP(CP_UTF8); 

    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    if( a == 0)
    {
        printf("A VARIAVEL 'A' É IGUAL A 0");
    }
    else
    {
        printf("A VARIAVEL 'A' É DIFERENTE DE 0");
    }

    // OPERADORES DE COMPARAÇÃO
    // == IGUALDADE
    // > MAIOR
    // < MENOR
    // >= MAIOR OU IGUAL
    // <= MENOR OU IGUAL
    // != DIFERENTE

    return 0;
}