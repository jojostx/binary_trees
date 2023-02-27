#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}

/**
 * is_perfect - checks if a binary tree is perfect
 * A perfect binary tree is a binary tree in which
 * all interior nodes have two children and
 * all leaves have the same depth or same level.
 * @tree: pointer to the node
 * @depth: depth of the tree
 * @level: level of the tree
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		   is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the node
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = (int)binary_tree_depth(tree);

	return (is_perfect(tree, d, 0));
}
