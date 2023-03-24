#include "lista.h"
#include <math.h>

int CalcSalario(Lista *L,int n ){
    int fat,Vfat,cont = 0;
    Fn *aux = pegaInfo(L,n);
    Vfat = aux->grEstudo;
    for(fat = 1; Vfat > 1; Vfat = Vfat - 1){
        fat = fat *Vfat;
    }
    return fat;
}

int poliglota(Lista *L, int n){
    Fn *aux = pegaInfo(L,n);
    return pow(aux->QtLingua,3);
}

int main(){
    Lista *L1 = CriaLista();
    insereInicio(L1,20);
    printf("Teste de lista \n\n" );
    imprimeLista(L1);
    
}