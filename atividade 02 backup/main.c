#include "lista.h"

int main(){
    Lista *l = criaLista(), *l1 = criaLista(), *l2 = criaLista();
    // int valor;
    // insereNoInicio(l, 10);
    // insereNoInicio(l, 20);
    // insereNoInicio(l, 40);
    // insereNoInicio(l, 80);
    // insereNoInicio(l, 20);

    // imprimeLista(l);

    // valor = retiraNo(l, 2);
    // printf("Valor retirado :%d\n\n", valor);
    // imprimeLista(l);

    insereNoOrdenado(l1, 90);
    insereNoOrdenado(l1, 20);
    insereNoOrdenado(l1, 30);
    insereNoOrdenado(l1, 20);
    insereNoOrdenado(l1, 10);
    insereNoOrdenado(l1, 80);

    // insereNoOrdenado(l2, 90);
    // insereNoOrdenado(l2, 20);
    // insereNoOrdenado(l2, 30);
    // insereNoOrdenado(l2, 20);
    // insereNoOrdenado(l2, 10);
    // insereNoOrdenado(l2, 80);
    // confereRepetido(l1, l2);

    imprimeLista(l1);

    insereNoOrdenado(l2, 1);
    insereNoOrdenado(l2, 3);
    insereNoOrdenado(l2, 2);

    removePorIndiceLista(l1, l2);
    // // fusaoLista(l1, l2);
    imprimeLista(l1);
    // imprimeLista(l2);






    return 0;
}