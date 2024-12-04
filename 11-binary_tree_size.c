#include "binary_trees.h"

/**
 * binary_tree_size - function to measures the size of a binary tree
 * @tree: input
 * Return: size_t
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 1;

	if (!tree)
		return (0);

	n += binary_tree_size(tree->left);
	n += binary_tree_size(tree->right);

	return (n);
}
