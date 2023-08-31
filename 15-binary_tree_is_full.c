#include "binary_trees.h"
/**
 *binary_tree_is_full - Checks if binay is full
 *@tree: Node pointer to root
 *Return: Returns 1 if full and 0 if otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*Case for no children*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*Recursive search when node has two kids*/
	if (tree->left != NULL && tree->right != NULL)
	{
		return ((binary_tree_is_full(tree->left)) &&
			(binary_tree_is_full(tree->right)));
	}
	return (0);
}
