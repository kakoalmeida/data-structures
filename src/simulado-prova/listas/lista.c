#include "lista.h"
/*Questão 1: Lista Simples
Objetivo: Implementar uma função para inserir um elemento em uma lista simples.

Instruções:

Crie uma função chamada inserir_lista_simples que recebe um ponteiro para o primeiro elemento de uma lista simples e um elemento como parâmetros.
*/

Lista* cria_lista(){
    return NULL;
}

Lista* inserir_lista(Lista* l, int v){
    Lista *p = (Lista*) malloc (sizeof(Lista));
    p->info = v;
    p->prox = l;
    return p;
}

void imprimir(Lista* l){
    Lista* p;
    for(p = l; p != NULL; p = p->prox)
        printf("Valor de info: %d\n", p->info);
}