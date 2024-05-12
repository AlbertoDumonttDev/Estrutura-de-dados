#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8


int soma( int a, int b ) // o 'int' no começo indica o tipo de retorno da função
{
    int s = a + b;
    return s; // o valor de 's' deve ser inteiro pois foi definido na declaração da função
}

int sub( int a, int b ) // o 'int' no começo indica o tipo de retorno da função
{
    int s = a - b;
    return s; // o valor de 's' deve ser inteiro pois foi definido na declaração da função
}



int main(){
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, op, res;

    int fim  = 0;

    while( fim  == 0 )
    {
        printf("\n\nDIGITE O 1° VALOR: ");
        scanf("%d", &n1);

        printf("\n\nDIGITE O 2° VALOR: ");
        scanf("%d", &n2);

        printf("\n\nESCOLHA A OPERAÇÃO:\n1 - ADIÇÃO\n2 - SUBTRAÇÃO\n");
        scanf("%d", &op);

        if( op == 1 )
        {
            res = soma( n1, n2);
        }
        if( op == 2 )
        {
            res = sub( n1, n2);
        }

        printf("O RESULTADO DA OPERAÇÃO É: %d", res);

        printf("\n\n0 - CONTINUAR\n1 - PARAR\n");
        scanf("%d", &fim);
    }


    return 0;
}