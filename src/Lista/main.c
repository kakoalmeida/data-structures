#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

void mostrar_menu() {
    system("cls");
    printf("1) Criar lista\n");
    printf("2) Adicionar elemento\n");
    printf("2) Adicionar elemento\n");
    printf("3) Retirar elemento\n");
    printf("4) Imprimir lista\n");
    printf("5) Apagar lista\n");
    printf("6) Imprimir inverso lista\n");
    printf("7) Retirar elemnto N vezes\n");
    printf("Escolha a opcao:");
}

int main() {
    Lista *l;
    int menu = 1, v;

    while ((menu >= 1) && (menu <= 7)) {
        mostrar_menu();
        scanf("%i", &menu);
        switch (menu) {
            case 1:
                l = lst_cria();
                break;
            case 2:
                printf("Digite o numero a ser inserido:");
                scanf("%i", &v);
                l = lst_insere(l, v);
                break;
            case 3:
                printf("Digite o numero a ser removido:");
                scanf("%i", &v);
                l = lst_retira(l, v);
                break;
            case 4:
                printf("Valores da lista:");
                lst_imprime(l);
                break;
            case 5:
                printf("Apagando a lista!");
                lst_libera(l);
                break;
            case 6:
                printf("Valores da lista (inverso):");
                lst_imprimir_inversa(l);
                break;
            case 7:
                printf("Digite o numero a ser removido (varias vezes):");
                scanf("%i", &v);
                lst_retira_n(&l, v);
                break;
            default:
                printf("Opcao invalida! Saindo do software!");
        }
        system("pause");
    }
    return 0;
}













