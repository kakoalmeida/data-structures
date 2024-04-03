#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define N 50

typedef struct pilha{
	int n;
	int vet[N];
} Pilha;

Pilha* pilha_cria();
void pilha_push(Pilha* p, int v);
int pilha_pop(Pilha* p);
void imprimir(Pilha* p);
void pilha_apaga(Pilha* p);
int pilha_vazia(Pilha* p);

#endif
