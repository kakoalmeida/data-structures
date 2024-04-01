#include "stack.h"

int main(){
	Pilha* p;
	float top;
	p = pilha_cria();

	pilha_push(p, 50);
	pilha_push(p, 40);
	pilha_push(p, 30);
	pilha_push(p, 20);
	pilha_push(p, 10);

	printf("\nRemovendo o topo da pilha...\n");
	top = pilha_pop(p);
	printf("Removido o valor %.2f", top);
	printf("\nRemovendo o topo da pilha...\n");
        top = pilha_pop(p);
        printf("Removido o valor %.2f", top);
	printf("\nRemovendo o topo da pilha...\n");
        top = pilha_pop(p);
        printf("Removido o valor %.2f", top);

	pilha_libera(p);

	return 0;
}
