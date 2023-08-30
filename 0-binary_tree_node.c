#include "binary_trees.h"
#include <stdlib.h>

/**
 *parent - Parent node
 *value: Key value
 *Return: Pointer to created node
 *
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	
	/*Typecast and provide memory*/
	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return NULL;
	}
	else
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
	}
	return newnode;
}
