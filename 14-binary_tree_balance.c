#include "binary_trees.h"

/**
 * binary_tree_height - height tree
 * @tree: node tree
 * Return: the measured height
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
			h_l = 1;
		}

		if (tree->right != NULL)
		{
			h_r = 1 + binary_tree_height(tree->right);
		}
		else
		{
			h_r = 1;
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


/**
 * binary_tree_balance - calculates the balance of the tree
 * @tree: the root of the tree
 * Return: thebalance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int r, l;

	r = 0;
	l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = ((int)binary_tree_height(tree->left));
		r = ((int)binary_tree_height(tree->right));
	}

	return (l - r);
}
