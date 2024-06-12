#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h>

struct ponto
{
	float x;
	float y;
};

typedef struct ponto Ponto;

int main(){

	Ponto *p = ( Ponto* ) malloc( sizeof( Ponto ) );

	p->x = 1;
	p->y = 5;

	printf("Ponto = (%f,%f)", p->x,p->y);

	return 0;
}