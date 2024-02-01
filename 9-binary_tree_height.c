#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: the tree to measure
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_l, h_r;

	h_l = 0;
	h_r = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			h_l = 1 + binary_tree_height(tree->left);
		}
		else
		{
			h_l = 0;
		}

		if (tree->right != NULL)
		{
			h_r = 1 + binary_tree_height(tree->right);
		}
		else
		{
			h_r = 0;
		}

		if (h_r < h_l)
		{
			return (h_l);
		}
		else
		{
			return (h_r);
		}

	}
	else
	{
		return (0);
	}
}
