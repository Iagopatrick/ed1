#ifndef NO_H
#define NO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    struct no *pred, *prox;
}No;


No *criaNo(int valor);





#endif