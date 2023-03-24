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
    while(aux != NULL && aux->chave != valor){
        if(aux->prox == NULL){
            break;
        }
        aux = aux->prox;
    }

    return aux;
}
int buscaValorPorIndice(Lista *lista, int indice){
    No *aux = lista->pri;
    int i;
    if(lista->tamanho < indice){
        printf("Indice maior que a lista");
        
    }
    for(i = 1; i < indice; i++){
        aux = aux->prox;
    }
    return aux->chave;
}

void excluiNo(Lista *lista, int valor){
    No *delete = buscaNo(lista, valor);
    if(delete == NULL && delete->chave != valor){
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
            delete->prox->pred = delete->pred;
        }
        free(delete);
        lista->tamanho--;
    }

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

void insereNoAleatorio(Lista *lista, int tamanho){
    int i, n;
    for(i = 0; i < tamanho; i++){
        n = rand() % 100;
        insereNoInicio(lista, n);
    }

}

