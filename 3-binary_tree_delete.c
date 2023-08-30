#include "binary_trees.h"

/**
 *binary_tree_delete - Delete all nodes
 *@tree: The specified root node
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/*Recursively delete right and left nodes*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
