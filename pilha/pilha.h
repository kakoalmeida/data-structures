#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct lista {
    char info;
    struct lista *prox;
} Lista;

typedef struct pilha {
    Lista *prim;
} Pilha;

Pilha *cria();
void push(Pilha *p, char c);
char pop(Pilha *p);
int vazia(Pilha *p);
void libera(Pilha *p);
void imprime(Lista *p);
void verificar_pilha(Pilha *p);
Pilha *intercalar(Pilha *p, Pilha *q);
void ordenar(Pilha *p);

#endif
