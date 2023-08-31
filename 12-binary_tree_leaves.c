#include "binary_trees.h"
/**
 *binary_tree_leaves - Counts the leaves in a tree
 *@tree: Node pointer to root
 *Return: Returns the number of leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_count, r_count;

	if (tree == NULL)
	{
		return (0);
	}
	/**Return one every leaf*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	/*Update counts fo both right and left*/
	l_count =  binary_tree_leaves(tree->left);
	r_count =  binary_tree_leaves(tree->right);

	return (l_count + r_count);
}
