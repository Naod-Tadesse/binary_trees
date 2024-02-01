#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of the function
 * @node: the node to find sibling of
 * Return: the address to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
	{
		return (node->parent->left);
	}
	else
	{
		return (node->parent->right);
	}
}
