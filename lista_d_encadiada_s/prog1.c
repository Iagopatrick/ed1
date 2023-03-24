#include "lista.h"

int main(void)
{
  printf("iniciando o prog1\n");
  Lista* L = criaLista();
  printf("insereInicio\n");
  insereInicio(L,20);
  insereFinal(L,30);
  insereInicio(L,40);
  
  printf("O que tem na lista\n");
  imprimeLista(L);

  return 0;
}
