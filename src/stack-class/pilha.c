#include "pilha.h"

Pilha* pilha_cria(){
	Pilha* p = (Pilha*) malloc (sizeof(Pilha));
	p->prim = NULL;
	printf("\nPilha criada\n");
	return p;
}

void pilha_push(Pilha* p, int v){
	Lista* novo = (Lista*) malloc (sizeof(Lista));
	novo->info = v;
	novo->prox = p->prim;
	p->prim = novo->info;
}

void imprimir(Lista* l){
	Lista* p;
	for(p = l; p != NULL; p = p->prox){
		printf("Info: %d\n", p->info);
	}
}

int pilha_vazia(Pilha* p){
	return (p->prim == NULL);
}

int pilha_pop(Pilha* p){
	Lista* t;
	int v;
	if(pilha_vazia(p))
		return;

	t = p->prim;
	v = t->info;
	p->prim = t->prox;
	free(t);

	return v;
}


