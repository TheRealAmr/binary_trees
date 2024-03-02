#include "binary_trees.h"

/**
 * binary_tree_nodes - calc no of nodes.
 * @tree: node.
 *
 * Return: no of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no = 0;

	if (tree)
	{
		no += (tree->left || tree->right) ? 1 : 0;
		no += binary_tree_nodes(tree->left);
		no += binary_tree_nodes(tree->right);
	}
	return (no);
}
