#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes bin tree.
 * @tree: node to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
