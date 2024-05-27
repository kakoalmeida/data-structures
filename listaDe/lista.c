#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *cria(){
    return NULL;
}

Lista *inserir_decrescente(Lista *l, int v){
    Lista *q = (Lista*) malloc(sizeof(Lista));
    q->info = v;
    q->prox = l;
    q->ant = NULL;

    if (l != NULL){
        l->ant = q;
    }

    if (vazia(l)) {
        // Se a lista está vazia, o q elemento é o único elemento na lista
        return q;
    } else if (v >= l->info) {
        // Se o q valor é maior ou igual ao primeiro elemento, insere no início
        q->prox = l;
        l->ant = q;
        return q;
    } else {
        // Caso contrário, encontra a posição correta para inserção
        Lista *atual = l;
        while (atual->prox != NULL && atual->prox->info > v) {
            atual = atual->prox;
        }
        q->prox = atual->prox;
        if (atual->prox != NULL) {
            atual->prox->ant = q;
        }
        atual->prox = q;
        q->ant = atual;
        return l;
    }
}

int vazia(Lista *l){
    return l == NULL;
}

void imprime_inverso(Lista *l){
    if(vazia(l))
        return;

    imprime_inverso(l->prox);
    printf("Valor inverso na lista: %d\n", l->info);
}

void imprime(Lista *l){
    Lista *p;
    for(p = l; p != NULL; p = p->prox)
        printf("Elemento da lista: %d\n", p->info);
}