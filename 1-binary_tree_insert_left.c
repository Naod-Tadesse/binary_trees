#include "binary_trees.h"

/**
 * binary_tree_insert_left - this inserts node on the left
 * @parent: the parent node
 * @value: the value to be in the new node
 * Return: the node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_n;

	if (parent != NULL)
	{
		node_n = malloc(sizeof(binary_tree_t));
		if (node_n == NULL)
		{
			return (NULL);
		}

		node_n->parent = parent;
		node_n->right = NULL;
		node_n->n = value;
		node_n->left = parent->left;
		if (node_n->left != NULL)
			node_n->left->parent = node_n;
		parent->left = node_n;
	}
	else
	{
		return (NULL);
	}

	return (node_n);
}
