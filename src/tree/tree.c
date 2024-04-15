#include "tree.h"

T* create(){
	return NULL;
}

T* create_tree(char c, T* left, T* right){
	T* new = (T*) malloc (sizeof(T));
	new->info = c;
	new->left = left;
	new->right = right;
	return new;
}

int tree_empty(T* t){
       return t == NULL;
}

T* free_tree(T* t){
	if(!tree_empty(t)){
		free_tree(t->left);
		free_tree(t->right);
		free(t);
	}
	return NULL;
}

int is_in_tree(T* t, char c){
	if(tree_empty(t))
		return 0;
	else
		return t->info == c || is_in_tree(t->left, c) || is_in_tree(t->right, c);
}

void print_tree(T* t){
	if(!tree_empty(t)){
		printf("%c -> ", t->info);
		print_tree(t->left);
		print_tree(t->right);
	}
}
