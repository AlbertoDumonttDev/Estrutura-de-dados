#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10  // Define o tamanho da tabela hash

// Estrutura para armazenar os registros
typedef struct
{
    char nome[100];
    char cpf[12];  // Considerando CPF com 11 dígitos e 1 caractere para o terminador '\0'
} Pessoa;

// Estrutura para a entrada da tabela hash
typedef struct Entry
{
    Pessoa pessoa;
    struct Entry* next;  // Ponteiro para o próximo elemento na mesma posição (tratamento de colisões)
} Entry;

// Tabela hash
Entry* tabelaHash[TABLE_SIZE];

// Função de hash simples
unsigned int hash(char* cpf)
{
    unsigned int hash = 0;
    while (*cpf)
    {
        hash = (hash << 5) + *cpf++;
    }
    return hash % TABLE_SIZE;
}

// Inicializa a tabela hash
void iniciaTabelaHash()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        tabelaHash[i] = NULL;
    }
}

// Insere um registro na tabela hash
void inserePessoa(char* nome, char* cpf)
{
    unsigned int index = hash(cpf);
    Entry* newEntry = (Entry*)malloc(sizeof(Entry));
    strcpy(newEntry->pessoa.nome, nome);
    strcpy(newEntry->pessoa.cpf, cpf);
    newEntry->next = tabelaHash[index];
    tabelaHash[index] = newEntry;
}

// Busca um registro pelo CPF
Pessoa* procuraPessoa(char* cpf)
{
    unsigned int index = hash(cpf);
    Entry* entry = tabelaHash[index];
    while(entry)
    {
        if(strcmp(entry->pessoa.cpf, cpf) == 0)
        {
            return &entry->pessoa;
        }
        entry = entry->next;
    }
    return NULL;
}

// Função para imprimir a tabela hash
void impimeTabela()
{
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        Entry* entry = tabelaHash[i];
        if(entry)
        {
            printf("Index %d:\n", i);
            while(entry)
            {
                printf("  Nome: %s, CPF: %s\n", entry->pessoa.nome, entry->pessoa.cpf);
                entry = entry->next;
            }
        }
    }
}

int main() {
    // Inicializa a tabela hash
    iniciaTabelaHash();

    // Insere algumas pessoas na tabela hash
    inserePessoa("Alice Silva", "12345678900");
    inserePessoa("Bob Costa", "98765432100");
    inserePessoa("Carlos Souza", "12312312300");

    // Imprime a tabela hash
    impimeTabela();

    // Busca uma pessoa pelo CPF
    char cpfBusca[12];
    printf("\nDigite o CPF para busca: ");
    scanf("%11s", cpfBusca);

    Pessoa* p = procuraPessoa(cpfBusca);
    if(p)
    {
        printf("Pessoa encontrada: Nome: %s, CPF: %s\n", p->nome, p->cpf);
    }
    else
    {
        printf("Pessoa não encontrada.\n");
    }

    // Libera a memória alocada
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        Entry* entry = tabelaHash[i];
        while(entry)
        {
            Entry* prev = entry;
            entry = entry->next;
            free(prev);
        }
    }

    return 0;
}
