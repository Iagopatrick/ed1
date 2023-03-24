#include "listaord.h"

void insereOrd(Lista *L, int valor){
    No *aux = L->pri;
    if(L->pri == NULL){
        insereInicio(L,valor);
    }else{
        if(valor <= L->pri->chave){
            insereInicio(L,valor);
        }else if (valor >= L->ulti->chave){
            insereFinal(L,valor);
        }else{
            No *novo =  criaNo(valor);
            while (aux != NULL && aux->chave <= valor){
                aux = aux->prox;
            }
            aux->ant->prox = novo;
            novo->prox = aux;
            novo->ant = aux -> ant;
            aux ->ant = novo;
            L->tamanho++;
        }
    }
}

