#include <stdlib.h>
#include <stdio.h>
#include "listas.h"

/* função de criação: retorna uma lista vazia */
Lista *lst_cria() {
    return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere (Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* função imprime: imprime valores dos elementos */
void lst_imprime (Lista* l) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
        printf("info = %d\n", p->info);
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int lst_vazia (Lista* l) {
    return (l == NULL);
}

/* função busca: busca um elemento na lista */
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

/* função retira: retira elemento da lista */
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

/* função libera: remove todos os elementos da lista */
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

/* função insere_ordenado: insere elemento em ordem */
Lista* lst_insere_ordenado (Lista* l, int v) {
    Lista* novo;
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista */
    /* procura posição de inserção */
    while (p != NULL && p->info > v) {
        ant = p;
        p = p->prox;
    }
    /* cria novo elemento */
    novo = (Lista*) malloc(sizeof(Lista));
    novo->info = v;
    /* encadeia elemento */
    if (ant == NULL) { /* insere elemento no início */
        novo->prox = l; l = novo;
    } else { /* insere elemento no meio da lista */
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return l;
}

/*
3) Implemente uma função que imprima os elementos da lista em ordem inversa
(protótipo void lista_imprimir_inversa(Lista *l)). Crie no programa o menu (que
utiliza essa função):
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
