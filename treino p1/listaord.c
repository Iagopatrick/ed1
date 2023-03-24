#include "listaord.h"

Lista *crialistaOrd(){
    Lista *nova = (Lista *) calloc (1, sizeof(Lista));
    if(nova == NULL){
        perror("Erro na alocacao de memoria");
        exit(1);
    }
    nova->pri = NULL;
    nova->ult = NULL;
    nova->aux = NULL;
    nova->tamanho = 0;
    return nova;
}

Lista *insereNoInicio(Lista *l, int valor){
    No *novo = criaNo(valor);
    if(l->pri == NULL){
        l->pri = novo;
        l->ult = novo;
        l->aux = novo;
    }
    else{
        l->pri->pred = novo;
        
        l->pri = novo;
    }
    return l;
}

Lista *insereNoFinal(Lista *l, int valor){
    No *novo = criaNo(valor);
    if(l->pri == NULL){
        l->pri = novo;
        l->ult = novo;
       
    }
    else{
        l->ult->prox = novo;
        novo->pred = l->ult;
        l->ult = novo;
    }
    return l;
}

Lista *insereNoOrdenado(Lista *l, int valor){
    No *novo = criaNo(valor);
    if(l->pri != NULL){
        if(valor >= l->ult->chave){
            insereNoFinal(l, valor);
        }
        else if(valor <= l->pri->chave){
            insereNoInicio(l, valor);
        }
        else{
            if(valor >= l->aux->chave){
                while(valor >= l->aux->prox->chave && l->aux != l->ult){
                    l->aux = l->aux->prox;
                }
                novo->prox = l->aux->prox;
                novo->pred = l->aux;
                l->aux->prox = novo;
                l->aux->prox->pred = novo;
            }
            else{
                while(valor <= l->aux->pred->chave && l->aux != l->pri){
                    l->aux = l->aux->pred;
                }
                novo->prox = l->aux;
                novo->pred = l->aux->pred;
                l->aux->pred->prox = novo;
                l->aux->pred = novo;
            }




        }
    }
    else{
        l->pri = novo;
        l->ult = novo;
        l->aux = novo;
    }
    return l;
}



void imprimeListaOrd(Lista *l){
    No *aux = l->pri;
    int cont = 1;
    if(l->pri != NULL){
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
