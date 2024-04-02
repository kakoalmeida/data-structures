#include "lista.h"

Lista* cria_lista() {
	return NULL;
}

Lista* inserir(Lista* l, int v){
	Lista* novo = (Lista*) malloc (sizeof(Lista));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	if(l != NULL)
		l->ant = novo;
	return novo;
}

void imprimir(Lista* l){
	Lista* p;
	for(p = l; p != NULL; p = p->prox){
		printf("Info: %d\n", p->info);
	}
}

Lista* buscar(Lista* l, int v){
	Lista* p;
	for(p = l; p != NULL; p = p->prox)
		if(p->info == v)
			return p;
	return NULL;
}

Lista* remover(Lista* l, int v){
	Lista* p = buscar(l, v);

	if(p == NULL)
		return l;

	if(l == p)
		l = p->prox;
	else
		p->ant->prox = p->prox;

	if(p->prox != NULL)
		p->prox->ant = p->ant;

	free(p);
	return l;
}

void apagar(Lista* l){
	Lista* p;
	for(p = l->prox; p != NULL; p = p->prox){
		printf("\nRemovendo %d ", l->info);
		free(l);
		l = p;
	}
	printf("\nRemovendo %d ", l->info);
	free(l);
}
