#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: the given node
 * Return: the address of the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent)
	{
		if (node->parent == node->parent->parent->right)
		{
			return (node->parent->parent->left);
		}
		else
		{
			return (node->parent->parent->right);
		}
	}
	else
	{
		return (NULL);
	}
}
