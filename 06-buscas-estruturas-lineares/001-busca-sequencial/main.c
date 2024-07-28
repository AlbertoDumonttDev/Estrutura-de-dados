#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf

int v[10] = {4,8,2,56,34,7,98,1,25,10};

int main(void)
{
    int num = 10;

    for(int i = 0; i < 10; i++) // percorrer todo o vetor até que se valide a verificação da linha 11
    {
        if(v[i] == num)
        {
            printf("Elemento encontrado, na posicao %d.", i);
        }
    }

    return 0;
}