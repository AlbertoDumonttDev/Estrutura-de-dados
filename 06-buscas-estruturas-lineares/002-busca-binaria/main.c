#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf

int v[100];

int main(void)
{
    for(int i = 0; i < 100; i++) // criando vetor ordenado com 100 valores
    {
        v[i] = i + 1;
    }

    int num = 100;
    int comparacoes = 0;
    int continuar = 1;
    int ini = 0; // posicao do primeiro elemento
    int fim = 99; // posicao do ultimo elemento

    while(continuar == 1)
    {
        comparacoes++;
        int pivo = (ini + fim) / 2; // recebendo o elemento pivo
        
        if(v[pivo] == num)
        {
            printf("Elemento encontrado, na posicao %d.", v[pivo]);
            continuar = 0;
        }
        else
        {
            if(num > v[pivo]) // definindo nova area de busca se num for maior que o pivo
            {
                ini = pivo + 1;
            }
            else // definindo nova area de busca se num for menor que o pivo
            {
                fim = pivo + 1;
            }
        }

        // caso seja um valor que não esteja no array
        if(fim < ini)
        {
            printf("Elemento encontrado nao encontrado");
            continuar = 0;
        }
    }

    printf("\nComparacoes: %d", comparacoes);

    return 0;
}