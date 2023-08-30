#include "binary_trees.h"
/**
 *binary_tree_is_root - Checks if node is root
 *@node: Node to check
 *Return: Returns 1 on affirmative. 0 Otherwise
 *
 *
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
