#include "binary_trees.h"

/**
 * compare_depth - compare size
 * @tree: input
 * Return: int
 */

int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: input
 * Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	hl = compare_depth(tree->left);
	hr = compare_depth(tree->right);

	if ((hl - hr) == 0)
		return (1);

	return (0);
}
