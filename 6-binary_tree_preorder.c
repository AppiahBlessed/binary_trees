#include "binary_trees.h"
/**
 *binary_tree_preorder - Pre-Order traversal
 *@tree: Root node
 *@funct: Function to perform operation
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*The value in the node must be passed as a parameter to this function.*/
	func(tree->n);
	/*Traverse the left side recursively*/
	binary_tree_preorder(tree->left, func);
	/*Traverse the right side recursively*/
	binary_tree_preorder(tree->right, func);
}
