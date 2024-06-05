#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

    Lista *l;
    l = cria();

    if(vazia(l))
        printf("Lista criada!\n");

    l = inserir(l, 5);
    l = inserir(l, 68);
    l = inserir(l, 26);
    l = inserir(l, 35);
    l = inserir(l, 56);
    l = inserir(l, 23);
    l = inserir(l, 12);

    imprimir(l);
    printf("\n");
    imprimir_inversa(l);

    Lista *aux;
    aux = busca(l, 56);
    if(aux == NULL){
        printf("Valor nao esta presente na lista\n");
    } else{
        printf("Valor %d encontrado\n", aux->info);
    }
    
    printf("\n");

    l = remover(l, 35);
    imprimir(l);
    printf("\n");
    imprimir_inversa(l);

    libera(l);

    return 0;
}