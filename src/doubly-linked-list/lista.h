#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista* ant;
	struct lista* prox;
} Lista;

Lista* cria_lista(void);
Lista* inserir(Lista* l, int v);
Lista* buscar(Lista* l, int v);
Lista* remover(Lista* l, int v);
void imprimir(Lista* l);
void apagar(Lista* l);


#endif
