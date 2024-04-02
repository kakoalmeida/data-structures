#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	float info;
	struct lista* prox;
} Lista;

typedef struct pilha{
	Lista* prim;
} Pilha;

Pilha* pilha_cria();
void pilha_push(Pilha* p, float v);
float pilha_pop(Pilha*p);
int pilha_vazia(Pilha* p);
void pilha_libera(Pilha* p);


#endif
