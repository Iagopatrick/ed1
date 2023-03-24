#include "lista.h"

int main(){
    Lista *l1,*l2;   
    // Criação da Lista 1
    l1 = criaListaEncadeada(20); 
    l1 = insereElementoOrdenado(l1, 10);
    l1 = insereElementoOrdenado(l1, 20);
    l1 = insereElementoOrdenado(l1, 30);
    l1 = insereElementoOrdenado(l1, 10);
    // Criação da Lista 2
    l2 = criaListaEncadeada(20);
    l2 = insereElementoOrdenado(l2, 100);
    l2 = insereElementoOrdenado(l2, 2);
    l2 = insereElementoOrdenado(l2, 3);
    l2 = insereElementoOrdenado(l2, 1);

    printf("Lista 1: \n");
    imprimeLista(l1);
    printf("\n");

    printf("Lista 2: \n");
    imprimeLista(l2);
    printf("\n");
    
    l1 = fusaoDeListas(l1, l2);
    free(l2); //Libero l2 para não ter problema de possivel mudanças futuras em l2, que afetaria l1

    printf("Listas juntas: \n");
    imprimeLista(l1);
    printf("\n");


    return 0;
}