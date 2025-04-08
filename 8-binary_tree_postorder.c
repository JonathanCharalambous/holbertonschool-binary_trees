#include "binary_trees.h"

/**
 * binary_tree_postorder - searches the tree in a pre-order traversal
 * @tree: the tree we want to traverse
 * @func: pointer function to check the root
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
