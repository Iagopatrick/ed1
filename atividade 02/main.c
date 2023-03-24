#include "lista.h"
#include "listaord.h"
#include "menu.h"
#include <string.h>



int main(){
    int escolha1 = 0, escolha2 = 0, tamanho = 0, i = 0, valor = 0, retorno = 0;
    Lista *l1 = criaLista();
    Lista *l2 = criaLista();
    char escolhaSN[4];

    do{
        inicio();
        scanf("%d", &escolha1);

        switch(escolha1){
            case 1:
                menu();
                scanf("%d", &escolha2);
                switch (escolha2){
                    case 1:
                        printf("voce selecionou para inserir um valor em lista aleatoria: \n\n");
                        printf("Qual o tamanho dessa lista? \t");    
                        scanf("%d", &tamanho);
                        printf("Deseja colocar voce mesmo os valores da lista? \t");
                        getchar();
                        fgets(escolhaSN, 4, stdin);
                        if(strcmp(escolhaSN, "sim") == 0){
                            for(i = 0; i < tamanho; i++){
                                scanf("%d", &valor);
                                insereNoInicio(l1, valor);
                            }
                        }
                        else{
                            printf("Inserindo valores aleatorios... \n\n");
            
                            insereNoAleatorio(l1, tamanho);
                        }
                        imprimeLista(l1);
                        break;
                    case 2:
                        printf("voce selecionou para inserir um valor em lista ordenada: \n\n");
                        printf("Qual o tamanho dessa lista? \t");
                        scanf("%d", &tamanho);
                        // tamanho = tratamentoInt();
                        printf("Deseja colocar voce mesmo os valores da lista? \t");
                        getchar();
                        fgets(escolhaSN, 4, stdin);
                        if(strcmp(escolhaSN, "sim") == 0){
                            for(i = 0; i < tamanho; i++){
                                scanf("%d", &valor);
                                insereNoOrdenado(l1, valor);
                            }
                        }
                        else{
                            printf("Inserindo valores aleatorios... \n\n");
            
                            insereNoAleatorioOrdenado(l1, tamanho);
                        }
                        imprimeLista(l1);
                        break;  
                    case 3:
                        fusaoLista(l1, l2);
                        printf("Listas fundidas\n\n");
                        imprimeLista(l1);
                        l2 = criaLista();
                        printf("Atencao! - l2 deixa de existir! \n\n");
                        break;
                    case 4:
                        removePorIndiceLista(l1, l2);
                        printf("Lista 1 com sem os nos pelos indices da lista 2:\n\n");
                        imprimeLista(l1);
                        break;
                    case 5:
                        confereRepetido(l1, l2);
                        break;
                    case 6:
                        free(l1);
                        l1 = criaLista();
                        printf("Lista apagada!\n\n");
                        break;
                    case 7:
                        imprimeLista(l1);
                    case -1:
                        break;
                    default:
                        printf("Selecione uma opcao valida!\n\n");
                        break;

                    

                }
                break;
            case 2:
                menu();
                scanf("%d", &escolha2);
                switch (escolha2){
                    case 1:
                        printf("voce selecionou para inserir um valor em lista aleatoria: \n\n");
                        printf("Qual o tamanho dessa lista? \t");
                        scanf("%d", &tamanho);
                        printf("Deseja colocar voce mesmo os valores da lista? \t");
                        getchar();
                        fgets(escolhaSN, 4, stdin);
                        if(strcmp(escolhaSN, "sim") == 0){
                            for(i = 0; i < tamanho; i++){
                                scanf("%d", &valor);
                                insereNoInicio(l2, valor);
                            }
                        }
                        else{
                            printf("Inserindo valores aleatorios... \n\n");
            
                            insereNoAleatorio(l2, tamanho);
                        }
                        imprimeLista(l2);
                        break;
                    case 2:
                        printf("voce selecionou para inserir um valor em lista ordenada: \n\n");
                        printf("Qual o tamanho dessa lista? \t");
                        scanf("%d", &tamanho);
                        printf("Deseja colocar voce mesmo os valores da lista? \t");
                        getchar();
                        fgets(escolhaSN, 4, stdin);
                        if(strcmp(escolhaSN, "sim") == 0){
                            for(i = 0; i < tamanho; i++){
                                scanf("%d", &valor);
                                insereNoOrdenado(l2, valor);
                            }
                        }
                        else{
                            printf("Inserindo valores aleatorios... \n\n");
            
                            insereNoAleatorioOrdenado(l2, tamanho);
                        }
                        imprimeLista(l2);
                        break;  
                    case 3:
                        fusaoLista(l2, l1);
                        printf("Listas fundidas\n\n");
                        imprimeLista(l2);
                        l1 = criaLista();
                        printf("Atencao! - l1 deixa de existir! \n\n");
                        break;
                    case 4:
                        removePorIndiceLista(l2, l1);
                        printf("Lista 2 com sem os nos pelos indices da lista 1:\n\n");
                        imprimeLista(l2);
                        break;
                    case 5:
                        confereRepetido(l2, l1);
                        break;
                    case 6:
                        free(l2);
                        l2 = criaLista();
                        printf("Lista apagada!\n\n");
                        break;
                    case 7:
                        imprimeLista(l2);
                    case -1:
                        break;
                    default:
                        printf("Selecione uma opcao valida!\n\n");
                        break;

                }
                break;
            case -1:
                break;
            default:
                printf("Selecione uma opcao valida!\n\n");
                break;
        }

    }while(escolha1 != -1 && escolha2 != -1);
    


    return 0;
}