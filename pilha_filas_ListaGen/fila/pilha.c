#include "pilha.h"

Pilha* criaPilha()
{
    Pilha* P = (Pilha*) malloc(sizeof(Pilha));
	P->pri=NULL;
	P->fim=NULL;
    P->aux=NULL;
	return P;
}

void push(Pilha* P, int valor)
{
    No *novo=criaNo(valor);
    
    if(P->pri!=NULL)
    {
        P->fim->prox=novo;
        novo->ant=P->fim;
        P->fim=novo;
    }
    else
    {
        P->pri=novo;
        P->fim=novo;
    }
}

void pushNode(Pilha* P, No* node)
{
    if(P->pri!=NULL)
    {
        P->fim->prox=node;
        node->ant=P->fim;
        P->fim=node;

    }
    else
    {
        P->pri=node;
        P->fim=node;
    }
}

int pop(Pilha* P)
{
    int retorno;

    if(P->fim !=P->pri)
    {
        if(P->aux == P->fim)
        {
            P->aux=P->fim->ant;
        }
        retorno=P->fim->chave;
        P->fim=P->fim->ant;
        
        free(P->fim->prox);
        P->fim->prox=NULL;
        return retorno;
    }
    else if(P->fim==P->pri && P->fim != NULL)
    {
        retorno=P->fim->chave;
        free(P->fim);
        P->pri=NULL;
        P->fim=NULL;
        P->aux=NULL;
        return retorno;
    }
    else
    {
        printf("Pilha vazia!!!\n");
        return 0;
    }

}

No* popNode(Pilha* P)
{
    No *aux=P->fim;
    
    if(P->fim !=P->pri)
    {
        if(P->aux == P->fim)
        {
            P->aux=P->fim->ant;
        }
        P->fim=P->fim->ant;
        P->fim->prox=NULL;
    }
    else if(P->fim==P->pri && P->fim != NULL)
    {
        P->pri=NULL;
        P->fim=NULL;
        P->aux=NULL;
    }
    else
    {
        //printf("Pilha vazia!!!\n");
        return NULL;
    }
    return aux;
}