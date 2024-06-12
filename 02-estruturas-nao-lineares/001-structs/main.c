#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAIDA DE DADOS EX: Printf

struct pessoa // declarando struct pessoa
{
    int idade;
    float altura;
};

// renomeando a struct
typedef struct pessoa Pessoa;

int main(){

    // instanciando struct
    // struct Pessoa p; <- antes do typedef 
    
    Pessoa p; 

    // atribuindo valores as variaveis da struct
    p.idade = 5;
    p.altura = 1.65;

    printf("Idade da pessoa: %d\n", p.idade);
    printf("Altura da pessoa: %.2f", p.altura);
    
    return 0;
}