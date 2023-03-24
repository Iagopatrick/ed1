#ifndef LISTA_H
#define LISTA_H

#include"no.h"

typedef struct lista 
{
  int tamanho;
  No* pri;
  //No* aux;
  No* fim;
}Lista;

//Lista* L;

Lista* criaLista();
//Lista* insereInicio(Lista* L, int valor);
void insereInicio(Lista* L, int valor);
//Lista* insereFinal(Lista* L, int valor);
void insereFinal(Lista* L, int valor);
No* buscaChave(Lista* L, int valor);
void excluiInicio(Lista* L);
void excluiFinal(Lista* L);
void excluiChave(Lista* L, int valor);
void imprimeLista(Lista* L);
No* bucaChaveOrd(Lista* L, int valor);
void insereOrd(Lista* L, int valor);
void excluiChaveOrd(Lista* L,int valor);
void limpaLista(Lista* L);
Lista* deletaLista(Lista* L);
#endif
