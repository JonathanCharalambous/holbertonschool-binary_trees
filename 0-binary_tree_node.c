#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	
	node = malloc(sizeof(binary_tree_t));

	if (!value)
		return (NULL);

	node->n = value;
	node->parent = parent;

	return (node);
}
