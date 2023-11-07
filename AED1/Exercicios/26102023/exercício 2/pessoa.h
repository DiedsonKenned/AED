#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

// Definição do Tipo Abstrato de Dados (TAD) Pessoa
typedef struct {
    char nome[100];
    char data_nascimento[11];
    char cpf[15];
} Pessoa;

// Protótipos das funções
Pessoa *criarPessoa(const char *nome, const char *data_nascimento, const char *cpf);
void preencherPessoa(Pessoa *pessoa, const char *nome, const char *data_nascimento, const char *cpf);
void imprimirPessoa(const Pessoa *pessoa);
void liberarPessoa(Pessoa *pessoa);

#endif
