#include "binary_trees.h"

/**
 * binary_tree_height - function to measures the height of a binary
 * @tree: input
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t half = 0, hag = 0;

	if (!tree)
		return (0);

	if (tree->left)
		half = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hag = 1 + binary_tree_height(tree->right);

	if (half > hag)
		return (half);
	return (hag);
}
