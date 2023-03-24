
#include "listaord.h"




int main(){
    Lista *l = crialistaOrd();
    l = insereNoInicio(l, 10);
    l = insereNoOrdenado(l, 10);
    imprimeListaOrd(l);
    l = insereNoOrdenado(l, 13);
    l = insereNoOrdenado(l, 2);
    l = insereNoOrdenado(l, 1);
    l = insereNoOrdenado(l, 900);
    l = insereNoOrdenado(l, 10);

    insereNoFinal(l, 10);
    return 0;
}