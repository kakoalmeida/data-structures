#include "pilha.h"

/* Cria a pilha */
Pilha *pilha_cria () {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

/* inserção no início (push)*/
void pilha_push (Pilha* p, float v) {
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v;
    n->prox = p->prim;
    p->prim = n;
}

/* função imprime: imprime valores dos elementos */
void lst_imprime (Lista *l) {
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
        printf("info = %.2f\n", p->info);
}

/* retorna verdade se a pilha esta vazia */
int pilha_vazia(Pilha *p) {
    return (p->prim == NULL);
}

/* retorno do valor e remocao */
float pilha_pop (Pilha *p) {
    Lista *t;
    float v;
    if (pilha_vazia(p)) {
        exit(1);
    } /* aborta programa */
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}

/* função libera: remove todos os elementos da lista */
void pilha_libera (Pilha* p) {
    Lista* t;
    Lista* q = p->prim;
    while (q!=NULL) {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

/* intercaral pilha 1 e pilha 2, gerando uma nova pilha */
Pilha *pilha_intercalar(Pilha* p1, Pilha* p2) {
    Pilha *p;
    p = pilha_cria();
    while ((!pilha_vazia(p1)) && (!pilha_vazia(p2))) {
        pilha_push(p, pilha_pop(p1));
        pilha_push(p, pilha_pop(p2));
    }
    return p;
}



