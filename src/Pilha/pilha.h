#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define N 50 /* n�mero m�ximo de elementos */

struct pilha {
    int n;          /* vet[n]: primeira posi��o livre do vetor */
    float vet[N];   /* vet[n-1]: topo da pilha */
                    /* vet[0] a vet[N-1]: posi��es ocup�veis */
};

typedef struct pilha Pilha;

/* Aloca a pilha */
Pilha *pilha_cria ();
/* Insere na pilha */
void pilha_push (Pilha *p, float v);
/* retorna verdade se o valor de n for igual a 0 */
int pilha_vazia(Pilha* p);
/* remove do topo */
float pilha_pop (Pilha* p);
/* libera da memoria */
void pilha_libera (Pilha *p);

/* intercaral pilha 1 e pilha 2, gerando uma nova pilha */
Pilha *pilha_intercalar(Pilha* p1, Pilha* p2);

/* fun��o imprime: imprime valores dos elementos */
void vet_imprime (Pilha *p);

#endif // PILHA_H_INCLUDED
