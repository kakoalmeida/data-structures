#include "stack.h"

int main(){
	Pilha* p;
	p = pilha_cria();
	if(p->prim == NULL)
		printf("\nPilha criada");
	else
		printf("\nErro");

	pilha_push(p, 10);
	pilha_push(p, 20);
	pilha_push(p, 30);
	pilha_push(p, 40);

	float top;
	top = pilha_pop(p);
	printf("\nFoi removido: %.2f", top);
	top = pilha_pop(p);
	printf("\nFoi removido: %.2f", top);

	pilha_libera(p);

	return 0;
}
