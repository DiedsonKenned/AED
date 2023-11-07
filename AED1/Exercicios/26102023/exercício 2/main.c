#include <stdlib.h>
#include <stdio.h>
#include "pessoa.h"


int main() {
    // Criar uma pessoa e preencher seus dados
    Pessoa *pessoa = criarPessoa("João da Silva", "10/05/1990", "123.456.789-00");

    if (pessoa == NULL) {
        printf("Erro ao criar a pessoa.\n");
        return 1;
    }

    // Imprimir os dados da pessoa
    printf("Dados da Pessoa:\n");
    imprimirPessoa(pessoa);

    // Liberar a memória alocada para a pessoa
    liberarPessoa(pessoa);

    return 0;
}
