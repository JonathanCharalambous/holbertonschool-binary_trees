#include "binary_trees.h"


/**
 * tree_depth- determines the depth of a binary tree
 * @tree: the tree to check
 * Return: depth of the tree
 */
int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		tree = tree->left;
		depth++;
	}

	return (depth);

}

/**
 * is_perfect- determines if the tree is pefect
 * @depth: the depth of the tree
 * @level: the level we're currently at
 * Return: returns if the node has two children and increases the level by 1
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: the tree to check
 * Return: 1 is not perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = tree_depth(tree);
	return (is_perfect(tree, depth, 0));
}
