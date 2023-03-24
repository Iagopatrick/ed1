#include "filaP.h"

FilaP* criaFilaP()
{
    FilaP* FP = (FilaP*) malloc(sizeof(FilaP));
	FP->pri=NULL;
	FP->fim=NULL;
    FP->aux=NULL;
	FP->tamanho=0;
  return FP;
}

void imprimeFila(FilaP* FP)
{
    int idx=0;
    No* aux=FP->pri;
    printf("\n\n##############################\n\n");
    while(aux != NULL)
    {
        printf("indice: %i\tValor: %i Valor FP->aux: %i\n",idx,aux->chave, FP->aux->chave);
        aux=aux->prox;
        idx++;
    }
    printf("\n\n##############################\n\n");

}

void insereNodeInicio(FilaP* FP, No* node)
{
  node->prox=FP->pri;
  if(FP->pri==NULL)
  {
	  FP->pri=node;
      FP->aux=FP->pri;
    FP->fim=node;
  }
  else
  {
    FP->pri->ant=node;
    FP->pri = node;
  }

}

void insereNodeFinal(FilaP* FP, No* node)
{
  if(FP->pri==NULL)
  {
    FP->pri=node;
    FP->aux=FP->pri;
    FP->fim=node;
  }
  else
  {
    FP->fim->prox=node;
    node->ant=FP->fim;
    FP->fim=node;
  }
}

void push(FilaP* FP, int valor)
{
    pushNode(FP,criaNo(valor));
    imprimeFila(FP);
}
void pushNode(FilaP* FP, No* node)
{
       if(FP->pri!=NULL)
    {
        if(node->chave <= FP->pri->chave)
        {
            insereNodeInicio(FP,node);
        }
        else if(node->chave >= FP->fim->chave)
        {
            insereNodeFinal(FP,node);
        }
        else
        {
            if(node->chave >= FP->aux->chave)
            {//quer dizer que o valor que eu procuro está a direita do aux
                
                while(node->chave >= FP->aux->prox->chave && FP->aux->prox != FP->fim)
                {
                    FP->aux = FP->aux->prox;
                }
                node->prox=FP->aux->prox;
                node->ant=FP->aux;
                FP->aux->prox->ant=node;
                FP->aux->prox=node;        
            }
            else
            {
                while(node->chave <= FP->aux->ant->chave && FP->aux->ant != FP->pri)
                {
                    FP->aux = FP->aux->ant;
                }

                node->prox = FP->aux;
                node->ant=FP->aux->ant;
                FP->aux->ant->prox=node;
                FP->aux->ant=node;      
                 
            }
        }

    }
    else
    {
        //Lista está vazia
        insereNodeInicio(FP,node);
    }
    FP->tamanho++;
}
int pop(FilaP* FP)
{
    No* aux=popNode(FP);

    if(aux != NULL)
    {
        int retorno = aux->chave;
        free(aux);
        return retorno;
    }
    else
    {
        printf("Fila c/ prioridade Vazia!!!\n");
        return 0;
    }
     
}
No* popNode(FilaP* FP)
{
    No* aux= FP->pri;
    if((FP->pri != NULL) && (FP->pri != FP->fim))
    {
        FP->pri=FP->pri->prox;
        FP->pri->ant=NULL;
        FP->tamanho--;
    }
    else if(FP->pri == FP->fim)
    {
        FP->pri=NULL;
        FP->fim=NULL;
        FP->aux=NULL;
        FP->tamanho=0;
    
    }
    else
    {
        return NULL;
    }
   
   return aux;
}


