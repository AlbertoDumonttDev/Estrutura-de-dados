#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf
#include <stdlib.h>

struct ponto
{
	float x;
	float y;
};

typedef struct ponto Ponto;

int main(){

	// Ponto *p = (Ponto*) malloc(sizeof(Ponto));:
	// Declara um ponteiro p do tipo Ponto.
	// Usa a função malloc para alocar memória suficiente para armazenar um objeto do tipo Ponto. sizeof(Ponto) retorna o tamanho necessário em bytes.
	// O ponteiro retornado por malloc é convertido (cast) para o tipo Ponto*.
	Ponto *p = ( Ponto* ) malloc( sizeof( Ponto ) );

	// p->x = 1; e p->y = 5;:
	// Usa o operador -> para acessar e definir os membros x e y da estrutura Ponto apontada por p.

	p->x = 1;
	p->y = 5;

	printf("Ponto = (%f,%f)", p->x,p->y);

	return 0;
}