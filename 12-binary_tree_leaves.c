#include "binary_trees.h"

/**
 * binary_tree_leaves - calc no of leaves.
 * @tree: node.
 *
 * Return: leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lev = 0;

	if (tree)
	{
		lev += (!tree->left && !tree->right) ? 1 : 0;
		lev += binary_tree_leaves(tree->left);
		lev += binary_tree_leaves(tree->right);
	}
	return (lev);
}
