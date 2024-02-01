#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts node with atleat one child
 * @tree: the tree given
 * Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree != NULL && (tree->left != NULL || tree->right != NULL))
	{
		c = c + binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	}
	else if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (0);
	}

	return (c);
}
