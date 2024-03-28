#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista *prox;
} Lista;

Lista* cria_lista();
Lista* inserir(Lista* l, int v);
Lista* retirar(Lista* l, int v);
void imprimir(Lista* l);
void apaga_lista(Lista* l);
int verifica_lista(Lista* l);
int lista_comprimento(Lista* l);
void imprimir_inversa(Lista* l);


#endif
