#include "binary_trees.h"

/**
 * power - power
 * @a: base
 * @b: power
 * Return: result
 */

int power(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * power(a, b - 1));
}



/**
 * binary_tree_height - measures the height the tree
 * @tree: the root of the tree
 * Return: the height measure
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

/**
 * binary_tree_size - measures size of binary tree
 * @tree: root of the tree
 * Return: nodes
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

/**
 * binary_tree_is_perfect - this checks if the binary tree is perfect
 * @tree: the root node of the tree
 * Return: 1 or 0 (true or false)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
	{
		return (0);
	}

	h = (int)binary_tree_height(tree);
	return ((int)binary_tree_size(tree) == (int)power(2, h + 1) - 1);
}
