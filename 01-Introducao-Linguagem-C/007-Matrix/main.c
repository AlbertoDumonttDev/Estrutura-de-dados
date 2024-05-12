#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

// diferença de matrix para vetor na declaração
int vetor[2];
int matrix[2][2]; //duas colunas e duas linhas, podem ter valores diferente ex: matrix[2][3], primeiro é linhas e segundo coluna
int i = 0;
int j = 0;

int main(){
    SetConsoleOutputCP(CP_UTF8); 

    for( i = 0; i < 2; i++) // Ler a linha
    {   
        for( j = 0; j < 2; j++) // Ler a coluna
        {
            printf("\nDIGITE UM VALOR PARA A LINHA %d E COLUNA %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for( i = 0; i < 2; i++) 
    {   
        for( j = 0; j < 2; j++) 
        {
            printf("\nO VALOR DA POSIÇÃO LINHA %d E COLUNA %d É: %d", i, j, matrix[i][j]);
        }
    }


    return 0;
}