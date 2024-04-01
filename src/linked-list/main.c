#include "listas.h"

int main(){
	
	Lista* l;
	int i;
	l  = cria_lista();

	printf("Lista criada!\n");

	l = inserir(l, 2);
	l = inserir(l, 4);
	l = inserir(l, 16);
	l = inserir(l, 8);

	if(verifica_lista(l)){
                printf("Lista liberada\n");
        } else
                printf("Lista NAO liberada\n");

	imprimir(l);
	printf("\n");
	imprimir_inversa(l);

	Lista* l2;
	printf("Tamanho da lista: %d\n", lista_comprimento(l));
	l2 = cria_lista();
	l2 = inserir(l2, 1);
	l2 = inserir(l2, 3);
	l2 = inserir(l2, 5);
	l2 = inserir(l2, 7);
	
	printf("\nLista2\n");
	imprimir(l2);

	printf("\nListas concatenadas\n");
	Lista* l3;
	l3 = lista_intercalar(l, l2);

	imprimir(l3);
	l = retirar(l, 16);

	printf("\nUm elemento removido da lista\n");
	imprimir(l);

        printf("Tamanho da lista: %d\n", lista_comprimento(l));

	apaga_lista(l);
	
	return 0;
}
