#include "binary_trees.h"
/**
 *binary_tree_balance - Claculates the balance factor
 *@tree: Node pointer to root
 *Return: Returns the BF
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_count, r_count;

	if (tree == NULL)
	{
		return (0);
	}
	/*Clculating the heightof both right and left*/
	l_count = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r_count = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	/*Balance Factor (BF) = Height of Left Subtree - Height of Right Subtree*/
	return (l_count - r_count);
}
