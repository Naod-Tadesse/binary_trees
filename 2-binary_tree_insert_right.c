#include "binary_trees.h"

/**
 * binary_tree_insert_right - this function inserts node on right
 * @parent: the parent of the node
 * @value: the value in the new node
 * Return: returnsthe node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		node_n->n = value;
		node_n->left = NULL;
		node_n->right = parent->right;
		if (node_n->right != NULL)
		{
			node_n->right->parent = node_n;
		}
		parent->right = node_n;
	}
	else
		return (NULL);
	return (node_n);
}
