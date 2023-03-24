#include "lista.h"
#include "listaord.h"

No *Questao1LetraA(Lista *L, int n){
    No *aux = L->pri;
    int cont = 1;
    if( n <= L->tamanho && n >= 1 ){
        while (cont != n){
            aux = aux->prox;
            cont ++;
        }
        return aux;
    }else{
        printf("\nIndice nao existe \n");
        return NULL;
    }
}

void Questao1LetraB(Lista *L1, Lista *L2){
    No* aux = L2->pri;
    if(L1->pri ==NULL || L2->pri==NULL){
        printf("Erro uma das lista nao existe");
    }else{
        while (aux != NULL){
            insereOrd(L1,aux->chave);
            aux = aux->prox;
        }
        free(L2);
    }
}



void Questao1LetraC(Lista *L1,Lista *L2){
    int tam = 0;
    No *aux = L2->pri;
    tam = L1->tamanho;
    if(aux != NULL && L1->pri !=NULL){
        while (aux != NULL){
            if( aux->chave  <= L1->tamanho && aux ->chave >= 1){
                if(tam != L1->tamanho){
                    aux->chave --;
                }
                No *aux2=Questao1LetraA(L1,aux->chave);
                removeNo(L1,aux2->chave);

            }
            aux = aux ->prox;
        }
    }
}

void Questao1LetraD(Lista *L1, Lista *L2){
    No *aux  =  L1  -> pri;
    int cont = 1,cont2 = 1;
    while (aux != NULL){
        No *aux2 = L2 -> pri;
        while (aux2 != NULL){
            if(aux ->chave == aux2->chave){
                printf("Termo repetido e : %d\n",aux->chave);
            }
            aux2 = aux2 ->prox;
        }
        aux = aux ->prox;
    }
}

int entradaInteiro(){
    int entrada;
    do{
        while(scanf("%d",&entrada) == 0){
            printf("Entrada invalida, digite um numero valido");
            int letras;
            while((letras=getchar()!='\n'&& letras!=EOF));
        }
    } while (entrada < 0);
    return entrada;   
}




void menu(){
    

    printf("\nLista estao sendo geradas eleatoriamente dentro do arquivo main\n");
    printf("Talvez todos os testes nao funcionam por causa das listas geradas aleatoriamente\n");
    printf("\n\nAperte enter para continuar ");
    char a;
    scanf("%c",&a);
    printf("+-----MENU PARA TESTAR AS FUNCOES-----+\n");
    printf("+                                     +\n");
    printf("+      1 - Questao letra A            +\n");
    printf("+      2 - Questao letra B            +\n");
    printf("+      3 - Questao letra c            +\n");
    printf("+      4 - Questao letra D            +\n");
    printf("+                                     +\n");
    printf("+-------------------------------------+\n");
    printf("\nDigite uma opcao : \n");

}

int main(){
    No *aux;
    Lista *L1 = criaLista();
    insereOrd(L1,30);
    insereOrd(L1,20);
    insereOrd(L1,50);
    insereOrd(L1,40);
    Lista *L2 = criaLista();
    insereOrd(L2,20);
    insereOrd(L2,40);
    insereOrd(L2,10);

    imprimeLista(L1);
    imprimeLista(L2);

    menu();
    int entrada = entradaInteiro();
    switch (entrada){
        case 1:
            printf("Digite um indice : ");
            int n = entradaInteiro();
            aux=Questao1LetraA(L1,2);
            printf("\n\t No indice %d \t\n \n\t chave : %d \n",n,aux->chave);
            break;
        case 2:
            Questao1LetraB(L1,L2);
            imprimeLista(L1);
            break;
        case 3:
            Questao1LetraC(L1,L2);
            imprimeLista(L1);
            break;
        case 4:
            Questao1LetraD(L1,L2);
            break;
        default:
            printf("\n\tate mais \n");
            break;
    }
}