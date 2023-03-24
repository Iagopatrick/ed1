#include "lista.h"

Lista *criaNo(int valor)
{
  Lista *novo=(Lista*)malloc(sizeof(Lista));
//  Lista *novo=(Lista*)calloc(1,sizeof(Lista));
  if(novo==NULL)
  {
    perror("Erro no malloc");
    exit(1);
  }
  novo->chave = valor;
  novo->prox = NULL;
  return novo;
}

Lista *insereInicio(Lista *L , int valor)
{
  Lista *novo=criaNo(valor);
  novo->prox=L;
  L=novo;
  return L;
}

Lista *insereFinal(Lista *L , int valor)
{
  Lista *novo=criaNo(valor);
  Lista *aux=L;
  
  if(L==NULL)
  {
	  L=novo;
  }
  else
  {
    while(aux->prox!=NULL)
    {
  	  aux=aux->prox;
    }
    aux->prox=novo;
  }
  return L;
}

Lista *buscaChave(Lista *L , int valor)
{
  Lista *aux=L;

  while(aux!=NULL)
  {
    if(aux->chave==valor)
    {
      break;
    }
    aux=aux->prox;
  }
  return aux;
}

Lista *excluiInicio(Lista *L)
{
  if(L!=NULL)
  {	  
    Lista *aux=L;
    L=L->prox;
    free(aux);
  }
  return L;
}

Lista *excluiFinal(Lista *L)
{
  return NULL;
}

Lista *excluiChave(Lista *L,int valor)
{
  return NULL;
}

void imprimeLista(Lista *L)
{
  Lista *aux=L;
  int cont=1;
  while(aux!=NULL)
  {
    printf("Posicao: %i\t valor: %i\n",cont,aux->chave);
    aux=aux->prox;
    cont++;
  }
}

Lista *bucaChaveOrd(Lista *L,int valor)
{
  return NULL;
}

Lista *insereOrd(Lista *L,int valor)
{
  return NULL;
}

Lista *excluiChaveOrd(Lista *L,int valor)
{
  return NULL;
}

