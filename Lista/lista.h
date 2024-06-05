#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista{
    int info;
    struct lista *prox;
    struct lista *ant;
} Lista;

Lista *cria();
Lista *inserir(Lista *l, int v);
Lista *remover(Lista *l, int v);
Lista *busca(Lista *l, int v);
int vazia(Lista *l);
void imprimir(Lista *l);
void imprimir_inversa(Lista *l);
void libera(Lista *l);

#endif