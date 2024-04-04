#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/* nó da lista para armazenar valores reais */
struct lista {
    float info;
    struct lista *prox;
};
typedef struct lista Lista;

/* estrutura da pilha */
struct pilha {
    Lista *prim; /* aponta para o topo da pilha */
};
typedef struct pilha Pilha;

/* Cria a pilha */
Pilha *pilha_cria ();
/* inserção no início (push)*/
void pilha_push (Pilha* p, float v);
/* função imprime: imprime valores dos elementos */
void lst_imprime (Lista *l);
/* retorna verdade se a pilha esta vazia */
int pilha_vazia(Pilha *p);
/* retorno do valor e remocao */
float pilha_pop (Pilha *p);
/* função libera: remove todos os elementos da lista */
void pilha_libera (Pilha *p);

/* intercaral pilha 1 e pilha 2, gerando uma nova pilha */
Pilha *pilha_intercalar(Pilha* p1, Pilha* p2);

#endif // PILHA_H_INCLUDED
