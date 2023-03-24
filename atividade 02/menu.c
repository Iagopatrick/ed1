#include "menu.h"


void inicio(){
    printf("\n\n+--------- Deseja manipular qual lista?-------------+\n");
    printf("| 1 - lista 1                                       |\n");
    printf("| 2 - lista 2                                       |\n");
    printf("| (-1) - Parar o programa                           |\n");
    printf("+---------------------------------------------------+\n");
}

// int tratamentoInt(){
//     int num, flag = 0;
//     do{
//         flag = 1;
//         while(scanf("%d", &num) == 0){
//             printf("entrada invalida\n\n");
//             int s;
//             while((s=getchar())!='\n' && s!=EOF);
//             flag = 0;   
//         }
//     }while(flag);
//     return num;
// }
void menu(){
    printf("+--------- Escolha uma opcao para comecar: ---------+\n");
    printf("| 1 - Inserir numero na lista                       |\n");
    printf("| 2 - Inserir numero na lista ordenada              |\n");
    printf("| 3 - Fusao de duas listas                          |\n");
    printf("| 4 - Remover nos por indices de l2                 |\n");
    printf("| 5 - Verificar se duas listas tem o mesmo conteudo |\n");
    printf("| 6 - Apagar uma lista                              |\n");
    printf("| 7 - Imprimir lista                                |\n");
    printf("| (-1) - Parar o programa                           |\n");
    printf("+---------------------------------------------------+\n");
}