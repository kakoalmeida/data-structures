#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

int main(){

    Lista *l;
    l = cria();

    if(vazia(l)){
        printf("Lista criada!\n");
    } else {
        printf("Erro ao criar lista.\n");
    }

    l = inserir(l, 5);
    l = inserir(l, 10);
    l = inserir(l, 0);
    l = inserir(l, 15);
    l = inserir(l, 20);
    l = inserir(l, 25);
    l = inserir(l, 35);
    l = inserir(l, 30);
    
    int busca;
    printf("Qual valor deseja buscar?\n");
    scanf("%d", &busca);

    Lista *l2;
    l2 = buscar(l, busca);
    if(l2 == NULL){
        printf("Valor nao esta presente na lista!\n");
    } else{
        printf("Valor %d encontrado!\n", l2->info);
    }
    
    printf("\nLISTA:\n");
    imprimir(l);

    l = remover_elemento(l, 0);
    printf("\nLISTA:\n");
    imprimir(l);
    
    libera(l);

    return 0;
}
