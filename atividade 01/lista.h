#ifndef LISTA_H
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

typedef struct lista{
    int chave;
    struct lista* prox;
}Lista;


Lista *criaListaEncadeada(int valor);

Lista *insereElementoOrdenado(Lista *L, int valor);

Lista *insereInicioLista(Lista *L, int valor);

Lista *removeChave(Lista *l, int valor);

Lista *removeChaveRepetida(Lista *L);

void imprimeLista(Lista *L);

Lista *fusaoDeListas(Lista *L1, Lista *L2);

#endif