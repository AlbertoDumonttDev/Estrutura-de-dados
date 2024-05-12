#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int v[4]; // declarando um array/vetor com 4 elementos, o 'int' na declaração defini o tipo de valor dos elementos
int x = 0;

float f[3];
int i = 0;


int main(){
    SetConsoleOutputCP(CP_UTF8); 

    v[0] = 45;
    v[1] = 56;
    v[2] = 41;
    v[3] = 0;

    printf("MOSTRANDO ARRAYS/VETORES\n\n");
    printf("ARRAYS/VETORES DO TIPO INT\n");
    for( x = 0; x < 4; x++)
    {
        printf("ELEMENTO V[%d] É: %d\n", x, v[x]);
    }

    printf("\n\ARRAYS/VETORES DO FLOAT\n");
    for( i = 0; i < 3; i++)
    {
        printf("DIGITE UM VALOR PARA AGREGAR AO ELEMENTO %d DENTRO DO ARRAY/VETOR DO TIPO FLOAT: ", i);
        scanf("%f", &f[i]);
    }

    for( i = 0; i < 3; i++)
    {
        printf("ELEMENTO F[%d] É: %.1f\n", i, f[i]);
    }

    return 0;
}