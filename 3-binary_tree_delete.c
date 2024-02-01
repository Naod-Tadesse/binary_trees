#include "binary_trees.h"

/**
 * binary_tree_delete - this function deletes binary trees
 * @tree: the tree to be deleted
 * Return: returns void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
	else
		return;
}
