#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree in in-order
 * @tree: pointer to the node
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
