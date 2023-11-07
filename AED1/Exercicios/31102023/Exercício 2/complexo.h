#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    double real;
    double imaginario;
} Complexo;

Complexo* criarComplexo(double real, double imaginario);
void destruirComplexo(Complexo* complexo);
Complexo* somarComplexos(Complexo* a, Complexo* b);
Complexo* subtrairComplexos(Complexo* a, Complexo* b);
Complexo* multiplicarComplexos(Complexo* a, Complexo* b);
Complexo* dividirComplexos(Complexo* a, Complexo* b);

#endif
