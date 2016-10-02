#ifndef THREE_H_INCLUDED
#define THREE_H_INCLUDED
#include <stdio.h>

struct _binary_tree{
	int value;
	struct _binary_tree *left;
	struct _binary_tree *right;
};
typedef struct _binary_tree node;

node *create_node(int item);
node *add_node(node *root, int value);
node *search_(node *root, int item,int* op);
void pre_order(node *pnode);
void freeThree(node* root);







#endif // THREE_H_INCLUDED
