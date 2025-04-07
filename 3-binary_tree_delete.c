#include "binary_trees.h"

/**
 * binary_tree_delete- deletes a binary tree recursively in the order of
 * left->right->parent in a BFS manner
 * @tree: the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
