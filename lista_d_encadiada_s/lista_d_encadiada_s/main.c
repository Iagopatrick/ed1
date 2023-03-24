#include "listaord.h"

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

  printf("Depois do exclui incio:\n");
  excluiInicio(L);

  imprimeLista(L);

  //printf("\n\nlimpalista\n\n");

  //limpaLista(L);
//printf("Conteudo:\n");

  imprimeLista(L);

  L=deletaLista(L);
  //free(L);
  return 0;
}
