#include "lista.h"

Lista *CriaLista(){
    Lista *L = (Lista*) calloc(1,sizeof(Lista));
    L ->pri = NULL;
    L ->ulti = NULL;
    L -> aux = NULL;
    L ->quantidade = 0;
    return L;
}


void insereInicio(Lista *L, int valor){
    Fn *novo = addFuncionario(valor);
    novo->prox = L->pri;
    if(L->pri == NULL){
        L->pri = novo;
        L->ulti = novo;
        L->quantidade ++;
        L->aux = novo;
    }else{
        L->pri->ant = novo;
        L->pri = novo;
        L->quantidade ++;
    }
}

Fn *pegaInfo(Lista *L, int n){
    int cont = 0;
    Fn *aux = L->pri;
    while ( cont != n){
        aux = aux->prox;
    }
    return aux;
}


void imprimeLista(Lista *L){
    Fn *aux = L->pri;
    if(aux != NULL){
        printf(" Test de itens %d",aux->grEstudo);
        aux  = aux ->prox;
    }
}