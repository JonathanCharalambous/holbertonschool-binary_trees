#include "binary_trees.h"

/**
 * binary_tree_height- determines the depth/height of a binary tree
 * @tree: the tree to check
 * Return: +1 layer to the tree side until the root is reached
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);

}


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
