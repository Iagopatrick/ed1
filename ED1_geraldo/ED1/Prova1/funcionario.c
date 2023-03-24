#include "funcionario.h"


Fn *addFuncionario(int valor){

    //Funcao que cria um no com as informaoes que quero 

    // aqui era pra ter um monte de scanf referente a cada valor 
    // porque ai toda hora que for adicionar um funcionario na lista
    // eu peço as informaçoes direto na sua Criação
    Fn *novo  = (Fn *) calloc(1,sizeof(Fn));
    int qtLingua, cargo;
    float salario;
    novo -> cargo = 1;
    novo ->grEstudo = valor;
    novo->QtLingua = 2;
    strcpy(novo->nome,"Cleiton");
    novo ->indProdu = 0.7;
    novo -> salario = 56.36;
    novo ->prox = NULL;
    novo ->ant = NULL;

    return novo;
}