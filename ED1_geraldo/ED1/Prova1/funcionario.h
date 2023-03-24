#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct fn{
    char nome[50];
    int grEstudo;
    int QtLingua;
    int cargo;
    float indProdu;
    float salario;
    struct fn *prox;
    struct fn *ant;
}Fn;

Fn *addFuncionario(int valor);

#endif