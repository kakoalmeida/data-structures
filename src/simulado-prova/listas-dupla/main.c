#include "lista.h"

int main(){

    Lista* l;
    Lista* p;

    l = cria_lista();

    l = inserir_lista(l, 1);
    l = inserir_lista(l, 2);
    l = inserir_lista(l, 3);
    l = inserir_lista(l, 5);
    l = inserir_lista(l, 7);

    imprimir(l);

    printf("\nBusca elemento\n");

    p = busca_elemento(l, 10);
    if(p){
        printf("\nElemento encontrado, %d\n", p->info);
    } else
        printf("\nElemento nao encontrado\n");

    l = remove_elemento(l, 3);

    imprimir(l);
    
    return 0;
}