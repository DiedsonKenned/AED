#include <stdio.h>
#include "\exercícios2/pessoa.h"
#include "data.h"

int main() {
    Data dataNascimento;
    preencherData(&dataNascimento, 3, 11, 1990);

    Pessoa pessoa;
    preencherPessoa(&pessoa, "João Silva", &dataNascimento, "123.456.789-00");

    printf("Dados da Pessoa:\n");
    imprimirPessoa(&pessoa);

    return 0;
}