#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct arv {
    char info;
    struct arv *esq;
    struct arv *dir;
} A;

A *criavazia();
A *cria(char c, A *sae, A *sad);
A *libera(A *arv);
int arv_vazia(A *arv);
int arv_pertence(A *arv, char c);
void imprime(A *arv);

#endif