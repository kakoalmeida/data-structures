#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

    Pilha *a, *b, *res;

    a = cria();
    push(a, 'A');
    push(a, 'A');
    push(a, 'B');
    push(a, 'B');
    printf("\nPILHA A\n");
    imprime(a->prim);

    b = cria();
    push(b, 'C');
    push(b, 'C');
    push(b, 'D');
    push(b, 'D');
    printf("\nPILHA B\n");
    imprime(b->prim);

    //verificar_pilha(a);
    res = intercalar(a, b);
    printf("\nPILHA INTERCALADA\n");
    imprime(res->prim);

    ordenar(res);
    printf("\nPILHA ORDENADA\n");
    imprime(res->prim);

    return 0;
}