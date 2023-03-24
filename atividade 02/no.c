#include "no.h"


No *criaNo(int valor){
    No *novo = (No*) calloc (1, sizeof(No));
    if(novo == NULL){
        perror("Erro na memoria");
        exit(1);
    }
    novo->chave = valor;
    novo->prox = NULL;
    novo->pred = NULL;
    return novo;
}