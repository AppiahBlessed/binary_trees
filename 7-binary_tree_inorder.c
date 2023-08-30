#include "binary_trees.h"
/**
 *binary_tree_inorder - In order traversal
 *@tree: The starting or root node
 *@func: Function to perform operation
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*Traverse left*/
	binary_tree_inorder(tree->left, func);
	/*Perform operation*/
	func(tree->n);
	/*Traverse right*/
	binary_tree_inorder(tree->right, func);
}
