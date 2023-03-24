#include "lista.h"


Lista *criaLista(){
    Lista *nova = (Lista *) calloc (1, sizeof(Lista));
    if (nova == NULL){
        perror("Erro na memoria");
        exit(1);
    }
    nova->pri = NULL;
    nova->ult = NULL;
    nova->tamanho = 0;
    return nova;
}

No *buscaNo(Lista *lista, int valor){
    No *aux = lista->pri;

    if(aux == NULL){
        return NULL;
    }
    while(aux->prox != NULL && aux->chave != valor){
        aux = aux->prox;
    }

    return aux;
}

void excluiNo(Lista *lista, int valor){
    No *delete = buscaNo(lista, valor);
    if(delete == NULL || delete->chave != valor){
        printf("Não existe esta chave. \n");
    } 
    else{
        if (delete->pred == NULL){ //esta no inicio da lista
            lista->pri = delete->prox;
        }
        else{ //Esta no final da lista
            delete->pred->prox = delete->prox; 
        }
        if (delete->prox != NULL){ //esta no meio da lista
            delete->prox->pred = delete->prox;
        }
        free(delete);
    }
    lista->tamanho--;

}

void insereNoInicio(Lista *lista, int valor){
    No *novo = criaNo(valor);
    if(lista->pri == NULL){
        lista->pri = novo;
        lista->ult = novo;
    }
    else{

        lista->pri->pred = novo;
        novo->prox = lista->pri;
        lista->pri = novo;
        
        
    }
    lista->tamanho++;
    // printf("Foi");
}

void insereNoOrdenado(Lista *lista, int valor){
    No *novo = criaNo(valor);
    No *aux = lista->pri;
    if(lista->pri == NULL){
        lista->pri = novo;
        lista->ult = novo;
    }
    else{
        if(valor <= lista->pri->chave){
            lista->pri->pred = novo;
            novo->prox = lista->pri;
            lista->pri = novo;
            
        }
        else if(valor >= lista->ult->chave){
            lista->ult->prox = novo;
            novo->pred = lista->ult;
            lista->ult = novo;
        }
        else{
            while(aux->prox != NULL && aux->chave <= valor){
                aux = aux->prox;
            }

            
            aux->pred->prox = novo;
            novo->prox = aux;
            novo->pred = aux->pred;

            aux->pred = novo;
            
        }


    }
    
    lista->tamanho ++;
}


int retiraNo(Lista *lista, int indice){
    No *aux = lista->pri;
    int i, valor;
    
    if(indice > lista->tamanho || indice < 0){
        printf("Indice nao existe na lista");
        return 0;
    }
    for(i = 1; i < indice; i++){
        aux = aux->prox;
    }
    valor = aux->chave;
    excluiNo(lista, aux->chave);
    return valor;
}


void fusaoLista(Lista *lista1, Lista *lista2){
    No *aux = lista2->pri;
    if(lista1->pri == NULL){
        printf("Erro, a primeira lista nao existe!");
    }
    else if(lista2->pri == NULL){
        printf("Erro, a segunda lista nao existe!");
    }
    else{
        while(aux != NULL){
            insereNoOrdenado(lista1, aux->chave);
            aux = aux->prox;
        }
        free(lista2);
    }
}


void confereRepetido(Lista *lista1, Lista *lista2){
    No *aux1 = lista1->pri, *aux2 = lista2->pri;
    int flag = 1;
    while(aux1->prox != NULL && aux2->prox != NULL && flag != 0){
        if(aux1 != aux2){
            printf("As listas sao diferentes\n\n");
            flag = 0;
        }
        aux1 = aux1->prox;
        aux2 = aux2->prox;
    }
    if(flag){
        printf("As listas sao iguais!\n\n");
    }
    
}

void imprimeLista(Lista *lista){
    No *aux = lista->pri;
    int cont = 0;
    if(aux != NULL){
        printf("\n+------ Lista ------+:\n");
        while(aux != NULL){
            printf("posicao: %d\tvalor: %d\n", cont, aux->chave);
            aux = aux->prox;
            cont++;
        }
    }
    else{
        printf("+----- Lista vazia :( ------+");
    }
}

void removePorIndiceLista(Lista *lista1, Lista *lista2){
    No *aux = lista2->pri;
    
    
    while(aux != NULL){
        
        retiraNo(lista1, aux->chave);
        aux = aux->prox;
        printf("oi");
    }
    
}