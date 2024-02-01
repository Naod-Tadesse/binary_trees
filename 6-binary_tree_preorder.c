#include "binary_trees.h"

/**
 * binary_tree_preorder - this visits the nodes with preorder traversal
 * @tree: the tree to visit
 * @func: the function to print
 * Return: return void or nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
	else
		return;
}
