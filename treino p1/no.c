#include "no.h"

No *criaNo(int valor){
    No *novo = (No *) calloc (1, sizeof(No));
    if(novo == NULL){
        perror("Erro ao alocar memoria!");
        exit(1);
    }
    novo->pred = NULL;
    novo->prox = NULL;
    novo->chave = valor;
    return NULL;
}
