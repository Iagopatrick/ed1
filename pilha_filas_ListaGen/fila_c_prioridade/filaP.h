#ifndef FILAP_H
#define FILAP_H

#include"no.h"

typedef struct filaP 
{
  int tamanho;
  No* pri;
  No* aux;
  No* fim;
}FilaP;

FilaP* criaFilaP();
void push(FilaP* FP, int valor);
void pushNode(FilaP* FP, No* node);
int pop(FilaP* FP);
No* popNode(FilaP* FP);
void insereNodeInicio(FilaP* FP, No* node);
void insereNodeFinal(FilaP* FP, No* node);
void imprimeFila(FilaP* FP);



#endif