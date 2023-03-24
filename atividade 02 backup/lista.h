#ifndef LISTA_H
#define LISTA_H

#include "no.h"

typedef struct lista{
    int tamanho;
    No *pri, *ult;
}Lista;


Lista *criaLista();
No *buscaNo(Lista *lista, int chave);
void confereRepetido(Lista *lista1, Lista *lista2);
void insereNoInicio(Lista *lista, int valor);
void fusaoLista(Lista *lista1, Lista *lista2);

void excluiNo(Lista *lista, int chave);
void insereNoOrdenado(Lista *lista, int chave);

int retiraNo(Lista *lista, int indice);


void imprimeLista(Lista *lista);

void removePorIndiceLista(Lista *lista1, Lista *lista2);




#endif
