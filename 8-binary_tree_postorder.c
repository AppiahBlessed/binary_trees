#include "binary_trees.h"
/**
 *binary_tree_postorder - Post order traversal
 *@tree: The starting or root node
 *@func: Function to perform operation
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*Traverse left*/
	binary_tree_postorder(tree->left, func);
	/*Traverse right*/
	binary_tree_postorder(tree->right, func);
	/*Perform operation*/
	func(tree->n);
}
