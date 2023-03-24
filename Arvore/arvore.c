#include"arvore.h"


void node_imprime(No* node,void (*cb) (void *));

Arvore* criaArvore()
{
    Arvore* A = (Arvore*) malloc(sizeof(Arvore));
    A->root=NULL;
    return A;
}

 void insereNode(Arvore* A, No* novo,int (*cb) (void *, void *))
{
     if(A->root!=NULL)
     {
        printf("root !NULL\n");
         int retorno = cb(A->root->info,novo->info);
         printf("retorno: %i\n",retorno);
         if(retorno==1)
         {
            printf("InsereLeaf esq\n");
            if(A->root->esq==NULL)
            {
                A->root->esq=novo;
            }
            else
            {
                insereLeafNode(A->root->esq,novo,cb);
            }
            
         }
         else if(retorno ==-1)
         {
            printf("InsereLeaf dir\n");
            
            //printf("InsereLeaf esq\n");
            if(A->root->dir==NULL)
            {
                A->root->dir=novo;
            }
            else
            {
                insereLeafNode(A->root->dir,novo,cb);
            }

            //insereLeafNode(A->root->dir,novo,cb);
         }
         else
         {
            //printf("\n");
            printf("valor igual\n");
         }
     }
     else
     {
        printf("root NULL\n");
         A->root=novo;
     }
    
}




void insereLeafNode(No* node, No* novo,int (*cb) (void *, void *))
{
    if(node!=NULL)
    {
        printf("node !NULL\n");
        int retorno = cb(node->info,novo->info);
         printf("retorno: %i\n",retorno);
         if(retorno==1)
         {
            printf("InsereLeaf esq\n");
            if(node->esq==NULL)
            {
                node->esq=novo;
            }
            else
            {
                insereLeafNode(node->esq,novo,cb);
            }
            
         }
         else if(retorno ==-1)
         {
            printf("InsereLeaf dir\n");
            
            //printf("InsereLeaf esq\n");
            if(node->dir==NULL)
            {
                node->dir=novo;
            }
            else
            {
                insereLeafNode(node->dir,novo,cb);
            }

            //insereLeafNode(A->root->dir,novo,cb);
         }
         else
         {
            //printf("\n");
            printf("valor igual\n");
         }
    }
    else
    {
        printf("node NULL\n");
        node=novo;
    }    
   
}

void arv_imprime(Arvore* a,void (*cb) (void *))
{
  //printf("<");
  if(a != NULL)
  {
   // printf("%i",a->info);
    node_imprime(a->root,cb);
  }
  //printf(">");
}

void node_imprime(No* node,void (*cb) (void *))
{
    //printf("node_imprime\n");
    printf("\n<");
    if(node != NULL)
    {
        cb(node->info);
    }
    if(node->esq !=NULL)
    {
        //printf("e:");
        //cb(node->esq->info);
        node_imprime(node->esq,cb);
    }
    
    if(node->dir != NULL)
    {
        //printf("d:");
        //cb(node->dir->info);
        node_imprime(node->dir,cb);
    }
    printf(">");
}

// void insereNode(Arvore* A, No* novo,int (*cb) (void *, void *))
// {
//     printf("insereNode\n");
//     if(A->root!=NULL)
//     {
//         printf("a->root!=NULL\n");
//         //int retorno = cb(A->root->info,novo->info);
//         if(A->root->esq != NULL)
//         {
//             printf("A->root->esq != NULL\n");
//             insereNodeDireita(A->root,novo,cb);  
//         }
//         else 
//         {
//             if(A->root->dir == NULL)
//             {
//                 printf("else A->root->esq != NULL\n");
//                 insereNodeEsquerda(A->root,novo,cb);  
//             }
            
//         }
//         // else
//         // {
//         //     if(A->root->esq == NULL)
//         //     {
//         //         insereNodeEsquerda(A->root->esq,novo,cb);
//         //     }
//         //     else
//         //     {
//         //         insereNodeDireita(A->root->dir,novo,cb);
//         //     }

//         // }
        
//     }
//     else
//     {
//         printf("a->root==NULL\n");
//         A->root=novo;
//     }
    
// }


// void insereNodeDireita(No* node, No* novo,int (*cb) (void *, void *))
// {
//     if(node->dir!=NULL)
//     {
//         if(node->dir->dir !=NULL)
//         {
//             insereNodeDireita(node,novo,cb);
//         }
//         else 
//         {
//             node->dir->dir=novo;
//         }
//     }
//     else
//     {
//         node->dir=novo;
//     }

// }

// void insereNodeEsquerdaOrd(No* node, No* novo,int (*cb) (void *, void *))
// {
//     if(node->esq!=NULL)
//     {
//         int retorno = cb(node->info,novo->info);
//         if(retorno==1)
//         {

//         }
//         else if(retorno ==-1)
//         {

//         }
//         else
//         {

//         }
//     }
//     else
//     {

//     }

// }

// void insereNodeDireitaOrd(No* node, No* novo,int (*cb) (void *, void *))
// {
//     if(node->dir!=NULL)
//     {
//         int retorno = cb(node->info,novo->info);
//         if(retorno==1)
//         {

//         }
//         else if(retorno ==-1)
//         {

//         }
//         else
//         {

//         }
//     }
//     else
//     {
        
//     }

// }


// int verificaNode(No* node)
// {
//     if(node->esq !=NULL && node->dir !=NULL)
//     {
//         return 2;
//     }
//     else if(node->esq==NULL && node->dir ==NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         if(node->esq==NULL)
//         {
//             return -1;
//         }
//         else
//         {
//             return 1;
//         }

//     }
// }

No* searchLeafNode(No *node, No* delete, int(*cb)(void *, void *)){
    if(node != NULL){
        int retorno = cb(node->info, delete->info);
        if(retorno == 0){
            return node;
        }
        else if(retorno == 1){
            return searchLeafNode(node->esq, delete, cb);
        }
        else{
            return searchLeafNode(node->dir, delete, cb);
        }
    }
    else{
        printf("Nó não existe!\n\n");
        return NULL;
    }



}
