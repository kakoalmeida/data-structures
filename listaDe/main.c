#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista *inicio = cria();
    inicio = inserir_decrescente(inicio, 10);
    inicio = inserir_decrescente(inicio, 4);
    inicio = inserir_decrescente(inicio, 1);
    printf("Lista inicial: \n");
    imprime(inicio);
    printf("\n");
    inicio = inserir_decrescente(inicio, 12);
    printf("Lista após inserir 12: \n");
    imprime(inicio);
    printf("\n");
    inicio = inserir_decrescente(inicio, 5);
    printf("Lista após inserir 5: \n");
    imprime(inicio);

    printf("\n");
    imprime_inverso(inicio);

    return 0;
}