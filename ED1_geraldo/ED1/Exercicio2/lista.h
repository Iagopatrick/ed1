#ifndef LISTA_H
#define LISTA_H

#include "no.h"
typedef struct lista{
    int tamanho;
    No *pri;
    No *ulti;
}Lista;

Lista* criaLista();
void insereInicio(Lista *L, int valor);
void insereFinal(Lista *L, int valor);
void removeInicio(Lista *L);
void removeFim(Lista *L);
void removeNo(Lista *L, int valor);
void imprimeLista(Lista *L);
No *buscaNo(Lista *L, int valor);
No *buscaOrd(Lista *L, int valor);


#endif