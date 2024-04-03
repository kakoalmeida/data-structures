#include "pilha.h"

int main(){

	Pilha* p;
	p = pilha_cria();

	pilha_push(p, 5);
	pilha_push(p, 10);
	pilha_push(p, 15);
	pilha_push(p, 20);
	pilha_push(p, 25);

	int top;
	top = pilha_pop(p);
	printf("\nFoi removido valor %d da pilha", top);
	top = pilha_pop(p);
        printf("\nFoi removido valor %d da pilha", top);
	top = pilha_pop(p);
        printf("\nFoi removido valor %d da pilha", top);

	return 0;
}
