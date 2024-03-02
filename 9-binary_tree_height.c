#include "binary_trees.h"

/**
 * binary_tree_height - calc height.
 * @tree: node of tree
 *
 * Return: height/0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t leftL = 0, rightL = 0;

		leftL = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightL = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((leftL > rightL) ? leftL : rightL);
	}
	else
		return (0);
}
