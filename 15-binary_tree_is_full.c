 #include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: given tree
 * Return: 1 or 0 (for true or false)
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else
	{
		if (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right))
			return (1);
		else
			return (0);
	}
}
