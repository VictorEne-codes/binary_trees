#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count the leaves in a binary tree
 * @tree: input
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
