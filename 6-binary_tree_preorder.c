#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in pre-order
 * @tree: pointer to the node
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
