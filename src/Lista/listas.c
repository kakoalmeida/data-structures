#include <stdlib.h>
#include <stdio.h>
#include "listas.h"

/* fun��o de cria��o: retorna uma lista vazia */
Lista *lst_cria() {
    return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* lst_insere (Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void lst_imprime (Lista* l) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int lst_vazia (Lista* l) {
    return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* lst_busca (Lista* l, int v) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        if (p->info == v) {
            // Achou o valor!
            return p;
        }
    }
    return NULL;
//    return p;
}

/* fun��o retira: retira elemento da lista */
Lista* lst_retira (Lista* l, int v) {
    Lista *p, *ant;
    if (l != NULL) {
        // Remove no inicio
        p = l;
        if (l->info == v) {
            p = l->prox;
            free(l);
            return p;
        }
        // Remove no meio da lista
        ant = l;
        for (p = l->prox; p != NULL; p = p->prox, ant = ant->prox) {
            if (p->info == v) {
                ant->prox = p->prox;
                free(p);
                break;
            }
        }
        return l;
    }
}

/* fun��o libera: remove todos os elementos da lista */
void lst_libera (Lista* l) {
    Lista *p;
    if (l != NULL) {
        for (p = l->prox; p != NULL; p = p->prox) {
            printf("DEBUG: Removendo %i\n", l->info);
            free(l);
            l = p;
        }
        printf("DEBUG: Removendo %i\n", l->info);
        free(l);
    }
}

/* fun��o insere_ordenado: insere elemento em ordem */
Lista* lst_insere_ordenado (Lista* l, int v) {
    Lista* novo;
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista */
    /* procura posi��o de inser��o */
    while (p != NULL && p->info > v) {
        ant = p;
        p = p->prox;
    }
    /* cria novo elemento */
    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;
    /* encadeia elemento */
    if (ant == NULL) { /* insere elemento no in�cio */
        novo->prox = l; l = novo;
    } else { /* insere elemento no meio da lista */
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return l;
}

/*
3) Implemente uma fun��o que imprima os elementos da lista em ordem inversa
(prot�tipo void lista_imprimir_inversa(Lista *l)). Crie no programa o menu (que
utiliza essa fun��o):
(g) Imprimir ordem inversa
*/
/* funcao para imprimir inverso */
void lst_imprimir_inversa(Lista *l) {
    // SOLUCAO 1
    /*
    if (l == NULL) return;
    else lst_imprimir_inversa(l->prox);
    printf("%i\n", l->info);
    */
    // SOLUCAO 2
    /*
    if (l != NULL) {
        lst_imprimir_inversa(l->prox);
        printf("%i\n", l->info);
    }
    */
    // SOLUCAO 3
    Lista *t;
    t = lst_cria();
    for ( ; l != NULL ; l = l->prox) {
        t = lst_insere(t, l->info);
    }
    lst_imprime(t);
}

/* funcao retira todas ocorrencias de n da lista */
void lst_retira_n(Lista** l, int n) {
    Lista *p, *ant;
    int flag = 0;
    while (!flag) {
        // Remove no inicio
        p = *l;
        if ((*l)->info == n) {
            p = (*l)->prox;
            free(*l);
//            return p;
            *l = p;
        }
        // Remove no meio da lista
        ant = *l;
        if (*l != NULL) p = (*l)->prox;
        else p = NULL;
        for ( ; p != NULL; p = p->prox, ant = ant->prox) {
            if (p->info == n) {
                ant->prox = p->prox;
                free(p);
                break;
            }
        }
        //return l;
        if (p == NULL) flag = 1;
    }
}
