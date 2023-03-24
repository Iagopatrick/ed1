#include "no.h"
#include "ponto.h"
#include "arvore.h"
#include <stdlib.h>

int main(void)
{
  printf("iniciando o prog1\n");
  
  Arvore* A = criaArvore();

  printf("\n Inserindo ponto 10\n\n");
  insereNode(A,criaNo(criaponto(10,15)),comparaPonto);
  
  printf("\n Inserindo ponto 15\n\n");
  

  insereNode(A,criaNo(criaponto(15,25)),comparaPonto);
  
  printf("\n Inserindo ponto 25\n\n");
  insereNode(A,criaNo(criaponto(25,5)),comparaPonto);
  
  printf("\n Inserindo ponto 35\n\n");
  insereNode(A,criaNo(criaponto(35,10)),comparaPonto);

  printf("\n Inserindo ponto 5\n\n");
  insereNode(A,criaNo(criaponto(5,10)),comparaPonto);
  printf("\n Inserindo ponto 4\n\n");
  insereNode(A,criaNo(criaponto(4,10)),comparaPonto);
  printf("\n Inserindo ponto 6\n\n");
insereNode(A,criaNo(criaponto(6,10)),comparaPonto);

  printf("\n Inserindo ponto 6\n\n");
insereNode(A,criaNo(criaponto(16,10)),comparaPonto);

printf("\n Imprime Arvore\n\n");
  
 arv_imprime(A,imprimePonto);

 

  //imprimePonto((Ponto*)A->root->info);

  //printf("valo raiz: %i \t %i\n",A->root->info)
//  for(int i=0;i<100;i++)
//  {
  
//  }

  //arv_imprime(A,imprimePonto);
  
  // int x=rand()%10;
  // int y=rand()%10;
 
  int i=0;



 // for(i=0;i<20;i++)
 // {
    // x=rand()%10;
    // y=rand()%10;

    // int *x2 = (int*) malloc(sizeof(int));
    // *x2=i;

    // insereNodeOrd(LPonto,criaNo(criaponto(x,y)),comparaPonto);
    // insereNodeInicio(LInteiros,criaNo(x2));
  //}

  //printf("O que tem na lista\n");
  // imprimeLista(LPonto,imprimePonto);
  // imprimeLista(LInteiros,imprimeInt);
 // printf("Depois do exclui incio:\n");
 // excluiInicio(L);

 // imprimeLista(L);

  //printf("\n\nlimpalista\n\n");

  // limpaLista(LPonto);
  // imprimeLista(LPonto,imprimePonto);
//printf("Conteudo:\n");

  //imprimeLista(L);

  //L=deletaLista(L);
  //free(L);
  return 0;
}
