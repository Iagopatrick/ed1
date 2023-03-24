#include "listasimples.h"


Lista *criaLista(int valor){
    Lista *nova = (Lista *) calloc (1, sizeof(Lista));
    if(nova == NULL){
        perror("Erro na alocacao de memoria\n\n");
        exit(1);
    }
    nova->prox = NULL;
    nova->chave = valor;

    return nova;
}

Lista *insereInicio(Lista *l, int valor){
    Lista *nova = criaLista(valor);
    if(l == NULL){
        l = nova;
    }
    nova->prox = l;
    l = nova;
    return l;
}

Lista *insereFim(Lista *l, int valor){
    Lista *nova = criaLista(valor), *aux = l;
    if(l == NULL){
        l = nova;
    }
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = nova;

    return l;
}

Lista *insereOrdenado(Lista *l, int valor){
    Lista *nova = criaLista(valor), *aux = l, *pred = NULL;
    if(l == NULL){
        l = nova;
    }
    else{
        while(aux != NULL && valor > aux->chave){
            pred = aux;
            aux = aux->prox;
        }
        if(pred == NULL){ //menor que todos na lista
            nova->prox = aux;
            l = nova;
        }
        else{
            nova->prox = aux;
            pred->prox = nova;
            
        }
    }


    return l;
}


Lista *concatenaLista(Lista *l1, Lista *l2){
    Lista *aux = l2;
    if(l1 == NULL){
        perror("Primeira lista vazia\n\n");
        exit(1);
    }
    else{
        while(aux != NULL){
            l1 = insereFim(l1, aux->chave);
            aux = aux->prox;
        }
    }
    
    return l1;
}

Lista *excluiValor(Lista *l, int valor){
    Lista *delete = l, *pred = NULL;
    if(l != NULL){
        while(delete != NULL && valor != delete->chave){
            pred = delete;
            delete = delete->prox;
        }
        if(pred == NULL){
            l = delete->prox;
        }
        else{
            pred->prox = delete->prox;
        }

        free(delete);
    }
    return l;
}





void imprimeLista(Lista *l){
    Lista *aux = l;
    int cont = 1;
    if(l != NULL){
        while(aux != NULL){
            printf("| Posicao: %d, valor: %d|\n\n", cont, aux->chave);
            aux = aux->prox;
            cont++;
        }
    }
    else{
        printf("Lista vazia\n\n");
    }
}
