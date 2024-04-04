#include "pilha.h"

int main(){
    Pilha* p;
    float top;

    p = cria_pilha();

    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);
    pilha_push(p, 40);
    pilha_push(p, 50);

    top = pilha_pop(p);
    printf("\n%.2f foi removido do topo da pilha\n", top);
    top = pilha_pop(p);
    printf("\n%.2f foi removido do topo da pilha\n", top);
    top = pilha_pop(p);
    printf("\n%.2f foi removido do topo da pilha\n", top);

    return 0;
}