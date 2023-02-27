#include "binary_trees.h"

/**
 * recursive_delete_binary_tree - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */
void recursive_delete_binary_tree(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	recursive_delete_binary_tree(tree->left);
	recursive_delete_binary_tree(tree->right);

	free(tree);
}

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* traverse to the root of the tree */
	binary_tree_t *current;

	if (tree == NULL)
		return;

	current = tree;

	while (current->parent != NULL)
	{
		current = current->parent;
	}

	/* run a recursive delete of the child nodes starting from the root */
	recursive_delete_binary_tree(current);
}
