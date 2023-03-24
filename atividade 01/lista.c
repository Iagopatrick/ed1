#include "lista.h"



Lista *criaListaEncadeada(int valor){
    Lista *nova = (Lista*) calloc(1,sizeof(Lista));
    if(nova == NULL){
        printf("Erro na alocacao!");
        exit(1);
    }

    nova->chave = valor;
    nova->prox = NULL;

    return nova;
}
       
Lista *insereElementoOrdenado(Lista *L, int valor){
    Lista *nova = criaListaEncadeada(valor), *aux = L, *pred = NULL;
    if (L == NULL) L = nova;
    while(aux != NULL && valor >= aux->chave){
        pred = aux;
        aux = pred->prox;
    }
    if(pred == NULL){
        nova->prox = aux;
        L = nova;
    }
    else{
        nova->prox = aux;
        pred->prox = nova;
    }
    return L;
}

Lista *insereInicioLista(Lista *L, int valor){
    Lista *nova = criaListaEncadeada(valor);
    nova->prox = L;
    L = nova;
    return L;
}

Lista *removeChave(Lista *L, int valor){
    Lista *aux = L, *pred = NULL;
    if (L == NULL) return NULL;
    while(aux != NULL && valor !=aux->chave){
        pred = aux;
        aux= aux->prox;
    }
    if(pred == NULL) L = aux->prox;
    else pred->prox = aux->prox;
    free(aux);
    return L;
}

Lista *removeChaveRepetida(Lista *L){
    Lista *aux = L, *nova = NULL, *pred = NULL, *temp = NULL, *delete = NULL;

    if(L == NULL) return NULL;
    
    while(aux != NULL){
        nova = insereElementoOrdenado(nova, aux->chave);
        aux = aux->prox;
    }

    
    pred = nova;
    temp = nova;
    
    while(temp != NULL){
        aux = pred;

        if(pred->chave == temp->chave){
            delete = temp;
            pred->prox = delete->prox;
            temp = delete->prox;
            L = removeChave(L, delete->chave);
        }
        pred = temp;
        temp = pred->prox;
    }
   
    return L;
}

void imprimeLista(Lista *L){
    Lista *aux=L;
    int cont=1;
    while(aux!=NULL){
        printf("Posicao: %d\t valor: %d\n",cont ,aux->chave);
        aux=aux->prox;
        cont++;
    }
}

Lista *fusaoDeListas(Lista *L1, Lista *L2){
    Lista *aux = L1, *aux2 = L2, *nova = NULL; 
    if(L1 == NULL){ 
        aux = aux2; 
        return aux; 
    }
    else if(L2 == NULL){ 
        return aux; 
    }
    while(L2 != NULL){ 
        L1 = insereElementoOrdenado(L1, L2->chave);
        L2 = L2->prox;
    } 
    
    return L1;
}
