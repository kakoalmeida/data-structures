#include "stack.h"

Pilha* pilha_cria(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_push(Pilha* p, float v){
	Lista* n = (Lista*) malloc(sizeof(Lista));
	n->info = v;
	n->prox = p->prim;
	p->prim = n;
	printf("\nvalor: %.2f\n", n->info);
}

int pilha_vazia(Pilha* p){
	return (p->prim == NULL);
}

float pilha_pop(Pilha* p){
	Lista* t;
	float v;
	if(pilha_vazia(p)){
		printf("\nLista vazia");
		exit(1);
	}

	t = p->prim;
	v = t->info;
	p->prim = t->prox;
	free(t);
	return v;
}

void pilha_libera(Pilha* p){
	Lista* q = p->prim;
	while(q != NULL){
		Lista* t = q->prox;
		printf("\nRemovendo: %.2f", q->info);
		free(q);
		q = t;
	}
	free(p);
}
