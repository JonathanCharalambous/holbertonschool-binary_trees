#include "binary_trees.h"
#include <stdio.h>


/**
 * binary_tree_is_root - checks if a node is a root or not
 * @node: the node to check
 * Return: 1 if a node 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	if (!(node->left == NULL) && !(node->right == NULL))
		return (1);

	return (0);
}
