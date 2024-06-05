#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

A *criavazia(){
    return NULL;
}

A *cria(char c, A *sae, A *sad){
    A *p = (A*) malloc(sizeof(A));
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}

int arv_vazia(A *arv){
    return arv == NULL;
}

A *libera(A *arv){
    if(!arv_vazia(arv)){
        libera(arv->esq);
        libera(arv->dir);
        free(arv);
    }
    return NULL;
}

int arv_pertence(A *arv, char c){
    if(arv_vazia(arv)){
        return 0;
    }
    else
        return arv->info == c || arv_pertence(arv->esq, c) || arv_pertence(arv->dir, c);

}

void imprime(A *arv){
    if(!arv_vazia(arv)){
        imprime(arv->esq);
        printf("%c - ", arv->info);
        imprime(arv->dir);
    }
}