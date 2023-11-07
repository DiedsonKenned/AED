// cubo.h
#ifndef CUBO_H
#define CUBO_H

typedef struct {
    double lado;
} Cubo;

Cubo* criarCubo(double lado);
void destruirCubo(Cubo* cubo);
double obterLado(Cubo* cubo);
double calcularArea(Cubo* cubo);
double calcularVolume(Cubo* cubo);

#endif