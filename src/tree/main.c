#include "tree.h"

int main(){

	T* tree1 = create_tree('5', create(), create());
							// create new tree with function create() call or NULL is the same thing
	T* tree2 = create_tree('2', NULL, tree1);

	T* tree3 = create_tree('6', NULL, create());

	T* tree4 = create_tree('3', NULL, NULL);

	T* tree5 = create_tree('7', tree3, tree4);

	T* tree6 = create_tree('4', tree2, NULL);

	T* t = create_tree('8', tree6, tree5);

	int x = is_in_tree(t, '3');
	if(x)
		printf("\nCaractere pertence a arvore!\n");
	else
		printf("\nCaractere nao pertence a arvore!\n");

	print_tree(t);

	t = free_tree(t);

	return 0;
}	
