#include "no.h"

No *criaNo(int valor){
  No *novo = (No*) calloc(1,sizeof(No));
  if(novo == NULL){
    perror("Nao cosegui alocar memoria, Errro Calloc criacao do No");
    exit(1);
  }
  novo->chave = valor;
  novo->prox  = NULL;
  novo ->ant = NULL;

  return novo;
}