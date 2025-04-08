#include "binary_trees.h"

/**
 * binary_tree_inorder - searches the tree in a pre-order traversal
 * @tree: the tree we want to traverse
 * @func: pointer function to check the root
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;


	func(tree->n);
	binary_tree_inorder(tree->right, func);
	binary_tree_inorder(tree->left, func);
}
