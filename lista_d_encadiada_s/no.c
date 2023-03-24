#include "no.h"

No *criaNo(int valor)
{
  No *novo=(No*)malloc(sizeof(No));
  if(novo==NULL)
  {
    perror("Erro no malloc");
    exit(1);
  }
  novo->chave = valor;
  novo->prox = NULL;
  novo->ant = NULL;
  return novo;
}
