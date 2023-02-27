#include "binary_trees.h"

/**
 * max - Find maximum between two numbers.
 * @num1: first number
 * @num2: second number
 *
 * Return: maximum between num1 & num2
 */
int max(int num1, int num2)
{
	if (num1 > num2)
		return (num1);

	return (num2);
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
