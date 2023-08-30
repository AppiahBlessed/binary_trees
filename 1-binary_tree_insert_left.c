#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_left - Function insert left node
 *@parent:Parent node
 *@value: Key value
 *Return: Pointer to created node
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	/*Typecast and provide memory*/
	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		temp = parent->left;
		newnode->left = temp;
		temp->parent = newnode;
	}
	else
	{
		newnode->left = NULL;
	}
	parent->left = newnode;
	return (newnode);
}
