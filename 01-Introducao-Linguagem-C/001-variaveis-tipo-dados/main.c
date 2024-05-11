#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <Windows.h> // BIBLIOTECA PARA CODIFICAÇÃO UTF-8

int a = 5; // varivel do tipo inteiro
float b = 2.3; // variavel para números reais
double c = 4.6; // varivael para números reasis, porém com o dobro de precisão do float
char d = 'a'; // varivavel que recebe 1 caracter

int main(void)
{

    SetConsoleOutputCP(CP_UTF8); // VARIAVEL PARA CODIFICAÇÃO UTF-8

    printf("\nO VALOR DA VARIVAEL 'A' É: %d", a); // '%d' indica que vai ser atribuido o valor de uma varival, o 'd' indica que a varivel vai ser do tipo INT.

    printf("\nO VALOR DA VARIVAEL 'B' É: %f", b); // '%d' indica que vai ser atribuido o valor de uma varival, o 'f' indica que a varivel vai ser do tipo FLOAT.
    printf("\nO VALOR DA VARIVAEL 'B' É: %.2f", b); // %'.2'f indica a quantidade de casas decimais 'que irá aparecer

    printf("\nO VALOR DA VARIVAEL 'A' É: %c", d); // '%c' indica que vai ser atribuido o valor de uma varival, o 'd' indica que a varivel vai ser do tipo CHAR.

    return 0;

}