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
    p->ant = NULL;
    if(l != NULL){
        l->ant = p;
    }
    return p;
}

int vazia(Lista *l){
    return (l == NULL);
}

Lista *remover(Lista *l, int v){
    Lista *p;

    if(!vazia(l)){
        if(l->info == v){
            p = l->prox;
            free(l);
            l = p;
            return p;
        }

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

Lista *busca(Lista *l, int v){
    Lista *p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v){
            return p;
        }
    }
    return NULL;
}

void imprimir(Lista *l){
    Lista *p;
    for(p = l; p != NULL; p = p->prox){
        printf("Valor da lista: %d \n", p->info);
    }
}

void imprimir_inversa(Lista *l){

    if(l == NULL){
        return;
    }

    imprimir_inversa(l->prox);
    printf("Valor da lista: %d \n", l->info);
    
}

void libera(Lista *l){
    Lista *p;
    for(p = l->prox; p != NULL; p = p->prox){
        free(l);
        l = p;
    }
    free(l);
    printf("Lista liberada da memoria");
}

