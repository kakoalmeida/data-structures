#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
} Lista;

Lista* cria_lista();
Lista* inserir_lista(Lista* l, int v);
void imprimir(Lista* l);

#endif