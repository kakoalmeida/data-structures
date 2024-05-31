#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista{
    int info;
    struct lista *prox;
} Lista;

Lista *cria();
Lista *inserir(Lista *l, int v);
Lista *buscar(Lista *l, int v);
Lista *remover_elemento(Lista *l, int v);
void imprimir(Lista *l);
int vazia(Lista *l);
void libera(Lista *l);

#endif