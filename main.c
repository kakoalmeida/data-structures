#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    
    
    A *a1 = cria('F', criavazia(), criavazia());
    
    A *a2 = cria('A', a1, criavazia());

    A *a3 = cria('C', NULL, NULL);

    A *a4 = cria('D', NULL, NULL);    

    A *a5 = cria('B', a3, a4);

    A *r = cria('E', a2, a5);

    int x = arv_pertence(r, 'G');

    if(x == 0)
        printf("\nO caractere buscado nao pertence a arvore!");
    else
        printf("\nO caractere buscado esta presente na arvore");

    printf("\n");
    imprime(r);

    r = libera(r);

    return 0;
}