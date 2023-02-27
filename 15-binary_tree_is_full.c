#include "binary_trees.h"

/**
 * _pow - Find _pow between two numbers.
 * @x: first number
 * @y: second number
 *
 * Return: pow between x & y
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * max - Find maximum between two numbers.
 * @x: first number
 * @y: second number
 *
 * Return: maximum between x & y
 */
int max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root
 *
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (1 + max(binary_tree_height(tree->left),
						binary_tree_height(tree->right)));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of tree to check
 *
 * Return: 1 if tree is a full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t calc_tree_size, size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	calc_tree_size = _pow(2, binary_tree_height(tree) + 1) - 1;

	if (size == calc_tree_size)
		return (1);

	return (0);
}
