#include "binary_trees.h"
/**
 *binary_tree_nodes - Gets the sum of all node
 *@tree: Node pointer to root
 *Return: the number of nodes
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*Break for recursion*/
	if (tree == NULL)
	{
		return (0);
	}
	/*Get left and right encounters of nodes*/
	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	return (0);
}
