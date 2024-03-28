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

	printf("Tamanho da lista: %d\n", lista_comprimento(l));

	l = retirar(l, 16);

	printf("Um elemento removido da lista\n");
	imprimir(l);

        printf("Tamanho da lista: %d\n", lista_comprimento(l));

	apaga_lista(l);
	
	return 0;
}
