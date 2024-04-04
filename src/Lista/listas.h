#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

struct lista {
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

// Cria lista vazia (0)
Lista *lst_cria();
// Insere um elemento na lista (inicio)
Lista* lst_insere (Lista* l, int i);
// Imprime a lista
void lst_imprime (Lista* l);
/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int lst_vazia (Lista* l);
/* fun��o busca: busca um elemento na lista */
Lista* lst_busca (Lista* l, int v);
/* fun��o retira: retira elemento da lista */
Lista* lst_retira (Lista* l, int v);
/* fun��o libera: remove todos os elementos da lista */
void lst_libera (Lista* l);
/* fun��o insere_ordenado: insere elemento em ordem */
Lista* lst_insere_ordenado (Lista* l, int v);


/* funcao para imprimir inverso */
void lst_imprimir_inversa(Lista *l);

/* funcao retira todas ocorrencias de n da lista */
void lst_retira_n(Lista** l, int n);

#endif // LISTAS_H_INCLUDED
