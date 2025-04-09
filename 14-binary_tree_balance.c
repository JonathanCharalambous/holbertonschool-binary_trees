#include "binary_trees.h"

/**
 * binary_tree_balance- finds the balance of a binary tree
 * @tree: the tree to check
 * Return: the balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int difference = 0;

	if (tree == NULL)
		return (0);

	difference = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (difference);
}
