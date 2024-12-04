#include "binary_trees.h"

/**
 * binary_tree_height_balance - functuon to measures the balance factor
 * @tree: input
 * Return: size_t
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hl = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height_balance(tree->right);

	if (hl > hr)
		return (hl);
	return (hr);
}

/**
 * binary_tree_balance - function to measures balancw factor
 * @tree: input
 * Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	if (tree->left)
		hl = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height_balance(tree->right);
	return (hl - hr);
}
