#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int main(){
    
    SetConsoleOutputCP(CP_UTF8); 

    int a;
    int b;
    int c;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite um número: ");
    scanf("%d", &b);

    printf("Digite um número: ");
    scanf("%d", &c);

    if( a == b && b == c)
    {
        printf("A, B e C tem valores iguais!");
    }

    // OPERADORES LÓGICOS
    // && operador E
    // || operador OU
    // ! operador NÃO (inverte o valor lógico, ex: se A for true, com !a ficaria false)

    return 0;
}