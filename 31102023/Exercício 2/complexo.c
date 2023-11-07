#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

Complexo* criarComplexo(double real, double imaginario) {
    Complexo* complexo = (Complexo*)malloc(sizeof(Complexo));
    if (complexo) {
        complexo->real = real;
        complexo->imaginario = imaginario;
    }
    return complexo;
}

void destruirComplexo(Complexo* complexo) {
    free(complexo);
}

Complexo* somarComplexos(Complexo* a, Complexo* b) {
    Complexo* resultado = criarComplexo(a->real + b->real, a->imaginario + b->imaginario);
    return resultado;
}

Complexo* subtrairComplexos(Complexo* a, Complexo* b) {
    Complexo* resultado = criarComplexo(a->real - b->real, a->imaginario - b->imaginario);
    return resultado;
}

Complexo* multiplicarComplexos(Complexo* a, Complexo* b) {
    Complexo* resultado = criarComplexo((a->real * b->real) - (a->imaginario * b->imaginario), (a->real * b->imaginario) + (a->imaginario * b->real));
    return resultado;
}

Complexo* dividirComplexos(Complexo* a, Complexo* b) {
    double denominador = (b->real * b->real) + (b->imaginario * b->imaginario);
    Complexo* resultado = criarComplexo(
            ((a->real * b->real) + (a->imaginario * b->imaginario)) / denominador,
            ((a->imaginario * b->real) - (a->real * b->imaginario)) / denominador
    );
    return resultado;
}
