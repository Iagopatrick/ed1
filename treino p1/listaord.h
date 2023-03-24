#ifndef LISTAORD_H
#define LISTAORD_H

#include <stdio.h>
#include <stdlib.h>
#include "no.h"

typedef struct lista{
    int tamanho;
    No *pri, *ult, *aux;
}Lista;


Lista *crialistaOrd();
Lista *insereNoInicio(Lista *l, int valor);
Lista *insereNoFinal(Lista *l, int valor);
Lista *insereNoOrdenado(Lista *l, int valor);
void imprimeListaOrd(Lista *l);






#endif