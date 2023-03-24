#ifndef LISTA_H
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

typedef struct lista
{
  int chave;
  struct lista* prox;

}Lista;

Lista *criaNo(int valor);
Lista *insereInicio(Lista *L , int valor);
Lista *insereFinal(Lista *L , int valor);
Lista *buscaChave(Lista *L , int valor);
Lista *excluiInicio(Lista *L);
Lista *excluiFinal(Lista *L);
Lista *excluiChave(Lista *L,int valor);
void  imprimeLista(Lista *L);
Lista *bucaChaveOrd(Lista *L,int valor);
Lista *insereOrd(Lista *L,int valor);
Lista *excluiChaveOrd(Lista *L,int valor);

#endif
