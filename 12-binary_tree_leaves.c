#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the leaves each node has
 * @tree: the tree to check
 * Return: the amount of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves++;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);

}
