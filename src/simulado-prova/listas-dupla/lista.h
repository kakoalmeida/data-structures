#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* ant;
    struct lista* prox;
} Lista;

Lista* cria_lista();
Lista* inserir_lista(Lista* l, int v);
void imprimir(Lista* l);
Lista* busca_elemento(Lista* l, int v);
int lista_vazia(Lista* l);
Lista* remove_elemento(Lista* l, int v);

#endif