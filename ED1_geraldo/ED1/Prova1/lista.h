#ifndef LISTA_H
#define LISTA_H
#include "funcionario.h"
typedef struct lista{
    int quantidade;
    Fn *pri;
    Fn *ulti;
    Fn *aux;
}Lista;


Lista *CriaLista();
void insereInicio(Lista *L, int valor);
void imprimeLista(Lista *L);
Fn *pegaInfo(Lista *L, int n);
#endif