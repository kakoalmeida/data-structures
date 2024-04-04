#include "pilha.h"

Pilha* cria_pilha(){
    Pilha* p = (Pilha*) malloc (sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void pilha_push(Pilha* p, float v){
    Lista* l = (Lista*) malloc (sizeof(Lista));
    l->info = v;
    l->prox = p->prim;
    printf("Inserindo %.2f na pilha\n", l->info);
    p->prim = l;
}

int pilha_vazia(Pilha* p){
    return (p->prim == NULL);
}

float pilha_pop(Pilha* p){
    Lista *l;
    float v;

    if(pilha_vazia(p))
        exit(1);

    l = p->prim;
    v = l->info;
    p->prim = l->prox;
    free(l);

    return v;
}

