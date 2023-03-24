#include "lista.h"

int main(void)
{
  Lista *L=NULL;

  L=criaNo(10);

  L=insereInicio(L,20);
  L=insereFinal(L,30);

  printf("O que tem na lista\n");
  imprimeLista(L);
printf("\n\nDepois de excluir o primeiro\n");
  L=excluiInicio(L);
  imprimeLista(L);
printf("\n\nDepois de excluir o segundo\n");
   L=excluiInicio(L);
  imprimeLista(L);
printf("\n\nDepois de excluir o terceiro\n");
  L=excluiInicio(L);
  imprimeLista(L);
printf("\n\nSo pra ter certeza\n");
L=excluiInicio(L);
  imprimeLista(L);



  return 0;
}
