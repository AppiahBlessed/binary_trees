#include "binary_trees.h"
/**
 *binary_tree_size - Returns the sze of the tree
 *@tree: Node pointer to root
 *Return: Returns the size
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	/*For every call of move left and then right while adding one*/
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
