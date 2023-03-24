#ifndef LISTAORD_H
#define LISTAORD_H

#include "lista.h"

void fusaoLista(Lista *lista1, Lista *lista2);
void insereNoOrdenado(Lista *lista, int valor);
No *buscaNoOrdenado(Lista *lista, int valor);
void removePorIndiceLista(Lista *lista1, Lista *lista2);
void exlcuiNoOrdenado(Lista *lista1, int valor);
void insereNoAleatorioOrdenado(Lista *lista, int tamanho);
void confereRepetido(Lista *lista1, Lista *lista2);










#endif