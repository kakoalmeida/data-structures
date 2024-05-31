#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *cria(){
    return NULL;
}

Lista *inserir(Lista *l, int v){
    Lista *p = (Lista*) malloc(sizeof(Lista));
    p->info = v;
    p->prox = l;
    return p;
}

int vazia(Lista *l){
    return (l == NULL);
}

void imprimir(Lista *l){
    Lista *p;
    for(p = l; p != NULL; p = p->prox)
        printf("Valor: %d\n", p->info);
}

Lista *buscar(Lista *l, int v){
    Lista *p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v){
            return p;
        }
    }
    return NULL;
}

Lista *remover_elemento(Lista *l, int v){
    Lista *p, *ant;
    p = l;

    if(l->info == v){ // valor a ser removido é o primeiro da lista
        p = l->prox;
        free(l);
        return p;
    }

    ant = l; // guarda referencia "anterior"

    for(p = l->prox; p != NULL; p = p->prox, ant = ant->prox){
        if(p->info == v){
            ant->prox = p->prox;
            free(p);
            break;
        }
    }
    return l;
}

void libera(Lista *l){
    Lista *p;
    for(p = l->prox; p != NULL; p = p->prox){
        printf("Liberando nodo: %d\n", p->info);
        free(l);
        l = p;
    }
    printf("Liberando nodo: %d\n", l->info);
    free(l);
}