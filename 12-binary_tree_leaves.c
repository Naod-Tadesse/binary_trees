#include "binary_trees.h"

/**
 * binary_tree_leaves - this counts the number of leaves
 * @tree: the binary tree given
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL && tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = l + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}

	return (l);
}
