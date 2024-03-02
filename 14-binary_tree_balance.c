#include "binary_trees.h"

/**
 * binary_tree_balance - calc balance.
 * @tree: node.
 *
 * Return: balance/0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - calc height.
 * @tree: node.
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
