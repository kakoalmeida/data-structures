#include "lista.h"

int main(){

    Lista* l;
    l = cria_lista();

    l = inserir_lista(l, 1);
    l = inserir_lista(l, 2);
    l = inserir_lista(l, 3);
    l = inserir_lista(l, 5);
    l = inserir_lista(l, 7);

    imprimir(l);

    return 0;
}