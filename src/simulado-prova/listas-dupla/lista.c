#include "lista.h"

Lista* cria_lista(){
    return NULL;
}

Lista* inserir_lista(Lista* l, int v){
    Lista* p = (Lista*) malloc (sizeof(Lista));
    p->info = v;
    p->prox = l;
    p->ant = NULL;

    if(l != NULL)
        l->ant = p;

    return p;
}

void imprimir(Lista* l){
    Lista* p;
    for(p = l; p != NULL; p = p->prox)
        printf("Valor de info: %d\n", p->info);
}

int lista_vazia(Lista* l){
    return (l == NULL);
}

Lista* busca_elemento(Lista* l, int v){
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v)
            return p;
    }
    return NULL;
}

Lista* remove_elemento(Lista* l, int v){

    Lista* p;

    if(l != NULL){
        if(l->info == v){
            p = l->prox;
            p->ant = NULL;
            free(l);
            return p;
        }

    for(p = l->prox; p != NULL; p = p->prox){
         if(p->info == v){
            p->ant->prox = p->prox;
            if(p->prox != NULL)
                p->prox->ant = p->ant;
                free(p);
                break;
            }
        }
    }

    return l;
}