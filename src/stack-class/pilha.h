#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista* prox;
} Lista;

typedef struct pilha{
	Lista* prim;
} Pilha;

Pilha* pilha_cria();
void pilha_push(Pilha* p, int v);
int pilha_pop(Pilha* p);
void imprimir(Lista* l);
int pilha_vazia(Pilha* p);
void pilha_libera(Pilha* p);
Pilha* pilha_intercalar(Pilha* p1, Pilha* p2);

#endif
