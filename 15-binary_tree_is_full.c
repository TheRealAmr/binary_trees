#include "binary_trees.h"

/**
 * is_full_recursive - check if full
 * @tree: node.
 *
 * Return: 0/1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	else
		return (1);
}

/**
 * binary_tree_is_full - is full?
 * @tree: node.
 *
 * Return: 0/1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (is_full_recursive(tree));
}
