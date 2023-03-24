#include "listaord.h"

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

void removePorIndiceLista(Lista *lista1, Lista *lista2){
    No *aux = lista2->pri;
    int vet[sizeof(lista2)], i = 0;
    
    for(i = 0; i < sizeof(lista2) - 1; i++){
        // if(aux->prox == NULL){
        //     break;
        // }
        vet[i] = buscaValorPorIndice(lista1, aux->chave);
        aux = aux->prox;
    
    }
    for(i = 0; i < sizeof(lista2) - 1; i++){
        // printf("Valor a seer excluido %d\n", vet[i]);
        exlcuiNoOrdenado(lista1, vet[i]);
    }
        
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



No *buscaNoOrdenado(Lista *lista, int valor){
    No *aux = lista->pri;

    if(aux == NULL){
        return NULL;
    }
    while(aux != NULL && aux->chave < valor){
        if(aux->prox == NULL){
            break;
        }
        aux = aux->prox;
    }

    return aux;
}

void exlcuiNoOrdenado(Lista *lista, int valor){
    No *delete = buscaNoOrdenado(lista, valor);
    if(delete == NULL && delete->chave != valor){
        printf("Nao existe esta chave\n\n");
    }
    else{
        if(delete->pred == NULL){
            lista->pri = delete->prox;
        }
        else{
            delete->pred->prox = delete->prox;
        }
        if(delete->prox != NULL){
            delete->prox->pred = delete->pred;
        }
        free(delete);
        lista->tamanho--;
    }
}

void insereNoAleatorioOrdenado(Lista *lista, int tamanho){

    int i, n;
    for(i = 0; i < tamanho; i++){
        n = rand() % 100;
        insereNoOrdenado(lista, n);
    }

}


void confereRepetido(Lista *lista1, Lista *lista2){
    No *aux1 = lista1->pri, *aux2 = lista2->pri;
    Lista *listaaux = NULL, *listaaux2 = NULL;
    int flag = 1;
    if(lista1->tamanho == lista2->tamanho){
        while(aux1 ->prox != NULL && aux2->prox != NULL){
            insereNoOrdenado(listaaux, aux1->chave);
            insereNoOrdenado(listaaux2, aux2->chave);
            aux1 = aux1->prox;
            aux2 = aux2->prox;
        }
        aux1 = listaaux->pri;
        aux2 = listaaux2->pri;

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
    printf("As listas sao diferentes\n\n");
    
}