#ifndef LISTA_H
#define LISTA_H

#include "no.h"

typedef struct lista{
    int tamanho;
    No *pri, *ult;
}Lista;

Lista *criaLista();
No *buscaNo(Lista *lista, int chave);
void insereNoInicio(Lista *lista, int valor);
int buscaValorPorIndice(Lista *lista, int indice);

void excluiNo(Lista *lista, int chave);

void imprimeLista(Lista *lista);

void insereNoAleatorio(Lista *lista, int tamanho);




#endif
