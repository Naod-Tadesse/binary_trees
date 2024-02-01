#include "binary_trees.h"

/**
 * binary_tree_size - this calculates size of binary tree
 * @tree: the root node
 * Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (tree != NULL)
	{
		s = s +  binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	else
	{
		return (0);
	}
	return (s);
}
