#include <stdio.h>
#include <string.h>
#include "\exercícios2/pessoa.h"
#include "data.h"

void preencherPessoa(Pessoa* pessoa, const char* nome, Data* dataNascimento, const char* cpf) {
    strncpy(pessoa->nome, nome, sizeof(pessoa->nome));
    pessoa->dataNascimento = *dataNascimento;
    strncpy(pessoa->cpf, cpf, sizeof(pessoa->cpf));
}

void imprimirPessoa(const Pessoa* pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Data de Nascimento: ");
    imprimirData(&pessoa->dataNascimento);
    printf("CPF: %s\n", pessoa->cpf);

void preencherData(Data* data, int dia, int mes, int ano) {
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

void imprimirData(const Data* data) {
    printf("%02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}