#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"


int main() {
    Pilha *p1, *p2, *pi;
    p1 = pilha_cria();
    p2 = pilha_cria();
    pilha_push (p1, 1);
    pilha_push (p1, 30);
    pilha_push (p1, 4);
    pilha_push (p2, 7);
    pilha_push (p2, 10);
    pilha_push (p2, 5);
    pi = pilha_intercalar(p1, p2);

    lst_imprime(pi->prim);

    pilha_libera(pi);

    return 0;
}
