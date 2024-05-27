#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *cria(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void push(Pilha *p, char c){
    Lista *q = (Lista*) malloc(sizeof(Lista));
    q->info = c;
    q->prox = p->prim;
    p->prim = q;
}

int vazia(Pilha* p){
    return p->prim == NULL;
}

char pop(Pilha *p){
    char c;
    Lista *l;

    if(vazia(p)){
        return '\0';
    }

    l = p->prim;
    c = l->info;
    p->prim = l->prox;
    free(l);
    return c;
}

void libera(Pilha *p){
    Lista *l;
    Lista *q = p->prim;
    
    while(q != NULL){
        l = q->prox;
        free(q);
        q = l;
    }
    free(p);
}

void imprime(Lista *p){
    Lista *l;
    for(l = p; l != NULL; l = l->prox)
        printf("Elementos na pilha: %c \n", l->info);
}

void verificar_pilha(Pilha *p) {
        Pilha *aux = cria();
    char c;
    int countA = 0;
    int countB = 0;

    // Transferir todos os caracteres da pilha original para a auxiliar e contar
    while (!vazia(p)) {
        c = pop(p);
        if (c == 'A') {
            countA++;
        } else if (c == 'B') {
            countB++;
        }
        push(aux, c);
    }

    // Restaurar a pilha original
    while (!vazia(aux)) {
        push(p, pop(aux));
    }

    // Verificar se o número de 'A' é igual ao número de 'B'
    if (countA == countB) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    libera(aux);
}

Pilha *intercalar(Pilha *p, Pilha *q){
    Pilha *aux = cria();

    while ((!vazia(p)) && (!vazia(q)))
    {
        push(aux, pop(p));
        push(aux, pop(q));
    }
    return aux;
}

void ordenar(Pilha *p) {
    int n = 0;
    Pilha *aux = cria();
    
    // Contar o número de elementos na pilha
    while (!vazia(p)) {
        push(aux, pop(p));
        n++;
    }

    // Transferir os elementos para um vetor
    char *arr = (char*) malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        arr[i] = pop(aux);
    }

    // Ordenar o vetor
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Empilhar os elementos ordenados de volta na pilha
    for (int i = 0; i < n; i++) {
        push(p, arr[i]);
    }

    // Liberar memória
    free(arr);
    libera(aux);
}