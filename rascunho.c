#include "lista.h"

int main(){
    Lista *l,*l1,*l2;
    // ex02:
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
    // ex03:
    printf("\n");
    // l1 = criaListaEncadeada(20);

    // l1 = insereElementoOrdenado(l1, 10);
    // l1 = insereElementoOrdenado(l1, 20);
    // l1 = insereElementoOrdenado(l1, 30);
    // l1 = insereElementoOrdenado(l1, 10);
    
    // l2 = criaListaEncadeada(20);
    // l2 = insereElementoOrdenado(l2, 100);
    // l2 = insereElementoOrdenado(l2, 2);
    // l2 = insereElementoOrdenado(l2, 3);
    // l2 = insereElementoOrdenado(l2, 1);

    // printf("Lista 1: \n");
    // imprimeLista(l1);
    // printf("\n");

    // printf("Lista 2: \n");
    // imprimeLista(l2);
    // printf("\n");
    
    // l1 = fusaoDeListas(l1, l2);
    // free(l2); //Libero l2 para não ter problema de possivel mudanças futuras em l2, que afetaria l1

    // printf("Listas juntas: \n");
    // imprimeLista(l1);
    // printf("\n");


    return 0;
}