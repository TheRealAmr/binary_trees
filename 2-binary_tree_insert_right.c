#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right
 * @parent: pointer.
 * @value: node value.
 *
 * Return: pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);

	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;

	return (n);
}
