#include "pilha.h"

Pilha* pilha_cria(){
	Pilha* p = (Pilha*) malloc (sizeof(Pilha));
	p->n = 0;
 	printf("\nPilha criada com %d\n", p->n);
	return p;
}

void pilha_push(Pilha* p, int v){
	if(p->n == N){
		exit(1);
	}

	p->vet[p->n] = v;
	p->n++;
}

int pilha_vazia(Pilha* p){
	return (p->n == 0);
}

int pilha_pop(Pilha* p){
	int v;
	if(pilha_vazia(p)){
		exit(1);
	}

	v = p->vet[p->n-1];
	p->n--;
	
	return v;
}
