#include "binary_trees.h"

/**
 * binary_tree_depth - calculates measure of the depth
 * @tree: the node to find depth
 * Return: the measured depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	static size_t tree_d;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		for (tree_d = 0; tree->parent; tree_d++)
		{
			tree = tree->parent;
		}
	}

	return (tree_d);
}
