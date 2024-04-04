#include "pilha.h"

/* Aloca a pilha */
Pilha *pilha_cria () {
    Pilha *p = (Pilha *) malloc(sizeof(Pilha));
    p->n = 0; /* inicializa com zero elementos */
    return p;
}

/* insere no topo */
void pilha_push (Pilha *p, float v) {
    if (p->n == N) { /* capacidade esgotada */
        printf("Capacidade da pilha estourou.\n");
        exit(1); /* aborta programa */
    } /* insere elemento na próxima posição livre */
    p->vet[p->n] = v;
    p->n++; /* equivalente a: p->n = p->n + 1 */
}

/* retorna verdade se o valor de n for igual a 0 */
int pilha_vazia(Pilha* p) {
    return (p->n == 0);
}

/* remove do topo */
float pilha_pop (Pilha* p) {
    float v;
    if (pilha_vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    } /* aborta programa */
    /* retira elemento do topo */
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

/* libera da memoria */
void pilha_libera (Pilha *p) {
    free (p);
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

/* função imprime: imprime valores dos elementos */
void vet_imprime (Pilha *p) {
    int i = p->n - 1;
    for ( ; i >= 0; i--)
        printf("info = %.2f\n", p->vet[i]);
}

