#include "pilha.h"

int main(void)
{
  /*printf("iniciando o prog1\n");
  Lista* L = criaLista();
  printf("insereInicio\n");
  insereOrd(L,20);
  printf("Inserindo: 20\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,30);
  printf("Inserindo: 30\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,5);
  printf("Inserindo: 5\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,35);
  printf("Inserindo: 35\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,40);
  printf("Inserindo: 40\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,34);
  printf("Inserindo: 34\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,31);
  printf("Inserindo: 31\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,6);
  printf("Inserindo: 6\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,1);
  printf("Inserindo: 1\t Valor do aux: %i\n",L->aux->chave);
  insereOrd(L,35);
  printf("Inserindo: 35\t Valor do aux: %i\n",L->aux->chave);


  printf("O que tem na lista\n");
  imprimeLista(L);

  printf("Depois do exclui incio:\n");
 // excluiInicio(L);

 // imprimeLista(L);

  //printf("\n\nlimpalista\n\n");

  //limpaLista(L);
//printf("Conteudo:\n");

  //imprimeLista(L);

  //L=deletaLista(L);
  //free(L);
*/

  Pilha *P = criaPilha();

  push(P,15);

  pushNode(P,criaNo(20));

  pushNode(P,criaNo(35));
  //pushNode(P,criaNo(45));
/*
  printf("Valor na pilha (pop): %i\n",pop(P));

  

  printf("Valor na pilha (popNode): %i\n",popNode(P)->chave);

  printf("Valor na pilha (popNode): %i\n",popNode(P)->chave);
*/
 

  No* teste = popNode(P);
  while(teste != NULL)
  {
    printf("Valor na pilha (teste popNode): %i\n",teste->chave);
    teste = popNode(P);
  }
  

  return 0;
}
