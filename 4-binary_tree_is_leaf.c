#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this checks whether node is leaf
 * @node: the node
 * Return: 1 or 0 (for true or false)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
