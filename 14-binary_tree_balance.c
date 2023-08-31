#include "binary_trees.h"
/**
 *binary_tree_balance - Claculates the balance factor
 *@tree: Node pointer to root
 *Return: Returns the BF
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 *binary_tree_height - Return height of structure
 *@tree: Root node to start from
 *Return: The height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count = 0, count, right_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/*Increase by one for each recursive call, if not leaf*/
	left_count = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_count = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	/*Final by adding current node plus gotten heigh*/
	count = ((left_count > right_count) ? left_count : right_count);
	return (count);
}
