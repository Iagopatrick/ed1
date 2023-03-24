#ifndef PILHA_H
#define PILHA_H

#include"no.h"

typedef struct pilha 
{
  No* pri;
  No* aux;
  No* fim;
}Pilha;

Pilha* criaPilha();
void push(Pilha* P, int valor);
void pushNode(Pilha* P, No* node);
int pop(Pilha* P);
No* popNode(Pilha* P);



#endif