#include "lista.h"

int main(){
    Lista *l;
    
    l = criaListaEncadeada(10);

    l = insereInicioLista(l, 10);
    l = insereInicioLista(l, 20);
    l = insereInicioLista(l, 30);
    l = insereInicioLista(l, 10);

    printf("Lista: \n");
    imprimeLista(l);
    printf("\n");
    l = removeChaveRepetida(l);

    printf("Lista apos retirada de chaves repetidas: \n");
    imprimeLista(l);
    
    return 0;
}