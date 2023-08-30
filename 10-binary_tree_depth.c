#include "binary_trees.h"
/**
 *binary_tree_height - Return depth of structure
 *@tree: Root node to start from
 *Return: The height
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
