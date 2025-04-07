#include "binary_trees.h"

/**
 * binary_tree_node- creates a new node with a value
 * @parent: the parent node to our new node
 * @value: the number we want to pass to the node
 * Return: the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	return (node);
}
