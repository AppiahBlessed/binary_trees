#include "binary_trees.h"
/**
 *binary_tree_height - Return height of structure
 *@tree: Root node to start from
 *Return: The height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count, count, right_count;

	if (tree == NULL)
	{
		return (0);
	}

	/*Increase by one for each recursive call, if not leaf*/
	left_count = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_count = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/*Final by adding current node plus gotten heigh*/
	count = ((left_count > right_count) ? left_count : right_count);
	return (count);
}
