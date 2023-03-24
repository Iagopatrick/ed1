#include "filaP.h"

int main(void)
{
 /* printf("iniciando o prog1\n");
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
  return 0;
  */

  FilaP* FP = criaFilaP();


printf("push(FP,50);\n");
  push(FP,50);
printf("push(FP,52);\n");
  pushNode(FP,criaNo(52));

printf("pushNode(FP,35);\n");
  push(FP,35);
  printf("pushNode(FP,75);\n");
  push(FP,75);
  printf("pushNode(FP,45);\n");
  push(FP,45);
  printf("pushNode(FP,25);\n");
  push(FP,25);
  printf("pushNode(FP,23);\n");
  push(FP,23);
  printf("pushNode(FP,32);\n");
  push(FP,32);
  printf("pushNode(FP,34);\n");
  push(FP,34);
  printf("pushNode(FP,46);\n");
  push(FP,46);
  //printf("push(FP,46);\n");

  printf("fim do push\n");
  printf("Valor no inicio da lista: %i\n",pop(FP));
  printf("Valor no inicio da lista: %i\n",popNode(FP)->chave);



}
