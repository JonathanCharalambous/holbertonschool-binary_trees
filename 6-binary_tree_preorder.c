#include "binary_trees.h"

/**
 * binary_tree_preorder - searches the tree in a pre-order traversal
 * @tree: the tree we want to traverse
 * @func: pointer function to check the root
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
