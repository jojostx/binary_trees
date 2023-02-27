#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
