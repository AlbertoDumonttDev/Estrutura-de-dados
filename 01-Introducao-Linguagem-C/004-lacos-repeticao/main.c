#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int main(){
    
    SetConsoleOutputCP(CP_UTF8); 

    int a = 0;
    int i = 0;


    printf( "\n\nLAÇO 'WHILE'\n" );
    while( a < 5 )
    {
        printf("\nVariavel 'A' é: %d", a);
        
        a++; // a = a + 1
    }

    printf( "\n\nLAÇO 'FOR'\n" );

    // for ( inicialização ; teste ; incremento )   
    for( i = 0; i < 4 ; i++ )
    {
        printf("\nVariavel 'I' é: %d", i);
    }

    return 0;
}