#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int main(){
    
    SetConsoleOutputCP(CP_UTF8); 

    int num;

    printf("\nOlá, por gentileza digite um número: ");
    scanf("%d", &num); 
    // scanf -> função que lê a entrada do usuario
    // '%d' indica que irá receber uma varivael, o 'd' indica  tipo da varivael a receber 
    // '&' indica o endereço na memoria ram onde a variavel 'num' está para armazenar a entrada do usuario

    printf("O valor da variavel 'num' é: %d", num);


    return 0;
}