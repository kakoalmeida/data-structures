#include <stdio.h>
#include <stdlib.h>
#include "listad.h"

Lista *cria(){
    return NULL;
}

Lista *inserir(Lista *l, int v){
    Lista *p = (Lista*) malloc(sizeof(Lista));
    p->info = v;
    p->prox = l;
    p->ant = NULL;
    if(l != NULL)
        l->ant = p;
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
    Lista *p;
    if(!vazia(l)){
        if(l->info == v){  // primeiro elemento
            p = l->prox;
            p->ant = NULL;
            free(l);
            return p;
        }

        // resto da lista

        for(p = l->prox; p != NULL; p = p->prox){
            if(p->info == v){
                p->ant->prox = p->prox;
                if(p->prox != NULL){
                    p->prox->ant = p->ant;
                }
            free(p);
            break;
            }
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