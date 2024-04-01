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

void imprimir_inversa(Lista* l){

	if(l == NULL)
		return;

	imprimir_inversa(l->prox);
	printf("Valor da lista inversa: %d\n", l->info);
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

int lista_comprimento(Lista* l){
	int i;
	Lista* p;
	for(p = l, i = 0; p != NULL; p = p->prox, i++);
	return i;
}

Lista* lista_intercalar(Lista* l1, Lista* l2){
	Lista* listaResultado = NULL;
	Lista* aux = NULL;
	
	if(l1 == NULL && l2 == NULL)
		return NULL;

	if(l1 == NULL)
		return l2;
	
	if(l2 == NULL)
		return l1;

	while(l1 != NULL && l2 != NULL){
		if(listaResultado == NULL){
			listaResultado = inserir(listaResultado, l1->info);
			aux = listaResultado;
		} else {
			aux->prox = inserir(aux, l1->info);
			aux = aux->prox;
		}
		l1 = l1->prox;
		
		if(l1 != NULL){
			aux->prox = inserir(aux, l2->info);
			aux = aux->prox;
			l2 = l2->prox;
		}
	}

	if(l1 != NULL){
		aux->prox = l1;
	} else if(l2 != NULL){
		aux->prox = l2;
	}	


	return listaResultado;
}
