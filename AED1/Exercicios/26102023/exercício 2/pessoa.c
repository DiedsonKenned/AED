#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para criar uma nova pessoa e preencher seus dados
Pessoa *criarPessoa(const char *nome, const char *data_nascimento, const char *cpf) {
    Pessoa *nova_pessoa = (Pessoa *)malloc(sizeof(Pessoa));
    if (nova_pessoa) {
        preencherPessoa(nova_pessoa, nome, data_nascimento, cpf);
    }
    return nova_pessoa;
}

// Função para preencher os dados de uma pessoa
void preencherPessoa(Pessoa *pessoa, const char *nome, const char *data_nascimento, const char *cpf) {
    strcpy(pessoa->nome, nome);
    strcpy(pessoa->data_nascimento, data_nascimento);
    strcpy(pessoa->cpf, cpf);
}

// Função para imprimir os dados de uma pessoa
void imprimirPessoa(const Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: %s\n", pessoa->data_nascimento);
    printf("CPF: %s\n", pessoa->cpf);
}

// Função para liberar a memória alocada para uma pessoa
void liberarPessoa(Pessoa *pessoa) {
    free(pessoa);
}
