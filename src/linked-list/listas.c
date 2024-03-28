#include "listas.h"

Lista* cria_lista(){
	return NULL;
}

Lista* inserir(Lista* l, int v){
	Lista* p = (Lista*) malloc (sizeof(Lista));
	p->info = v;
	p->prox = l;
	return p;
}

void imprimir(Lista* l){
	Lista* p;
	for(p = l; p != NULL; p = p->prox)
		printf("Valor do no: %d\n", p->info);

}

Lista* retirar(Lista* l, int v){
	Lista* p;
	Lista* ant;
	p = l;
	if(p->info == v){
		p = l->prox;
		free(l);
		return p;
	}

	ant = l;

	for(p = l->prox; p != NULL; p = p->prox, ant = ant->prox){
		if(p->info == v){
			ant->prox = p->prox;
			free(p);
			break;
		}
	}	
	return l;
}

int verifica_lista(Lista* l){
	return (l == NULL);
}

void apaga_lista(Lista* l){
	Lista* p;
	for(p = l->prox; p != NULL; p = p->prox){
		printf("Removendo: %d\n", l->info);
		free(l);
		l = p;
	}
	printf("Removendo: %d\n", l->info);
	free(l);
}