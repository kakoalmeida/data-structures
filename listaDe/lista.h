#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista{
    int info;
    struct lista *ant;
    struct lista *prox;
} Lista;

Lista *cria();
Lista *inserir_decrescente(Lista *l, int v);
int vazia(Lista *l);
void imprime(Lista *l);
void imprime_inverso(Lista *l);

#endif