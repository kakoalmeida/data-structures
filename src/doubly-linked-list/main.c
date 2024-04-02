#include "lista.h"

int main(){
	
	Lista* l;
	Lista* p;
	l = cria_lista();

	l = inserir(l, 1);
	l = inserir(l, 3);
	l = inserir(l, 5);
	l = inserir(l, 7);

	imprimir(l);
	
	p = buscar(l, 15);	
	if(p)
		printf("\nElemento encontrado: %d\n", p->info);
	else
		printf("\nElemento nao presente na lista\n");

	printf("Removendo elemento 3\n");
	l = remover(l, 3);

	imprimir(l);

	printf("\nApagando lista:\n");
	apagar(l);
	

	return 0;
}
