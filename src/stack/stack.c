#include "stack.h"

Pilha* pilha_cria(){
	Pilha* p = (Pilha*) malloc (sizeof(Pilha));
	p->n = 0;
	printf("\nPilha criada com %d\n", p->n);
	return p;
}

void pilha_push(Pilha* p, float v){
	if(p->n == N){
		printf("Capacidade da pilha cheia\n");
		exit(1);
	}
	printf("\nInserindo %.2f na posicao %d\n", v, p->n);
	p->vet[p->n] = v;
	p->n++;
}

int pilha_vazia(Pilha* p){
	return (p->n == 0);
}

float pilha_pop(Pilha* p){
	float v;
	if(pilha_vazia(p)){
		printf("Pilha vazia\n");
		exit(1);
	}

	v = p->vet[p->n-1];
	p->n--;
	return v;
}

void pilha_libera(Pilha* p){
	free(p);
}
