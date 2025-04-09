#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes found in the tree
 * @tree: the tree to check
 * Return: the amount of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);

}
