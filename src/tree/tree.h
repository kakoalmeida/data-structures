#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
	char info;
	struct tree* left;
	struct tree* right;
} T;

T* create();
T* create_tree(char c, T* left, T* right);
T* free_tree(T* t);
int tree_empty(T* t);
int is_in_tree(T* t, char c);
void print_tree(T* t);

#endif
