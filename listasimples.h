#ifndef LISTASIMPLES_H
#define LISTASIMPLES_H

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int chave;
    struct lista *prox;
}Lista;


Lista *criaLista(int valor);
Lista *insereInicio(Lista *l, int valor);
Lista *insereFim(Lista *l, int valor);
Lista *concatenaLista(Lista *l1, Lista *l2);
Lista *excluiValor(Lista *l, int valor);

Lista *insereOrdenado(Lista *l, int valor);
void imprimeLista(Lista *l);


#endif