#include "lista.h"
//Funcao Responsavel por criar lista
Lista* criaLista(){
    Lista* L = (Lista*) calloc(1,sizeof(Lista));
    L->pri = NULL;
    L->ulti = NULL;
    L->tamanho = 0;
    return L;
}


// Funcoes responsaveis por adicionar valores a lista;
void insereInicio(Lista *L,int valor){
    No* novo = criaNo(valor);
    novo ->prox = L->pri;
    if(L->pri == NULL){
        L->pri = novo;
        L->ulti = novo;
        L->tamanho += 1;
    }else{
        L->pri->ant = novo;
        L->pri = novo;
        L -> tamanho += 1;
    }
}

// void insereNoinicio(Lista *L,No *no){
//     no->prox = L->pri;
//     if(L->pri == NULL){
//         L->pri = no;
//         L->ulti = no;
//         L->tamanho ++;
//     }else{
//         L->pri->ant = no;
//         L->pri = no;
//     }
// }

void insereFinal(Lista *L, int valor){
    No *novo = criaNo(valor);
    if(L->pri == NULL){
        L->pri = novo;
        L->ulti = novo;
        L->tamanho += 1;
    }else{
        L->ulti->prox = novo;
        novo->ant = L->ulti;
        L->ulti = novo;
        L->tamanho += 1;
    }
}

// void insereNofim(Lista *L,No *no){
//     if(L->pri == NULL){
//         L->pri = no;
//         L->ulti = no;
//         L->tamanho++;
//     }else{
//         L->ulti->prox = no;
//         no->ant = L->ulti;
//         L->ulti = no;
//         L->tamanho++;
//     }
// }



//Funcoes para remocao de NO/Chave

void removeIncio(Lista *L){
    No *aux = L ->pri;
    L->pri = aux->prox;
    if(L->pri != NULL){
        L->pri->ant = NULL;
        L->tamanho --;
    }
    free(aux);
}

void removeFim(Lista *L){
    No *aux = L->pri;
    if(aux->prox != NULL){
        while (aux->prox != NULL){
            aux = aux-> prox;
        }
        aux = aux->ant;
        free(aux->prox);
        aux->prox = NULL;
        L ->tamanho --;
    }else{
        free(L->pri);
        L->pri = NULL;
        L->tamanho --;
    }

}

void removeNo(Lista *L, int valor){
    No *aux = buscaNo(L,valor);
    if(aux == NULL  ||  aux->chave != valor){
        printf("Valor informado nao existe");
        perror("Erro na funcao Remove No,Valor informado nao existe");
    }else{
        if(aux != NULL){
            if(aux == L->pri){
                removeIncio(L);
            }else{
                if( aux ->prox != NULL && aux -> ant != NULL){
                     aux->ant->prox = aux->prox;
                     aux->prox->ant = aux->ant;
                     free(aux);
                     L->tamanho -- ;
                }else{
                    if(aux == L->ulti ){
                        removeFim(L);
                    }
                }
            }
        }
    }
}


//Funcao resposavel por buscar chaves na lista

No *buscaNo(Lista *L, int valor){
    No *aux = L->pri;
    while (aux != NULL){
        if(aux->chave == valor){
            break;
        }
        aux = aux->prox;
    }
     return aux;
}



//Funcao responsavel por Imprime as nos


void imprimeLista(Lista*L){
    No *aux = L->pri;
    int cont = 1;
    if(aux !=NULL){
        printf(" \nCONTEUDO DENTRO DA LISTA \n");
        while (aux != NULL){
            printf("na posicao %d, tem o valor : %d \n",cont,aux->chave);
            aux = aux->prox;
            cont ++;
        }
    }
}