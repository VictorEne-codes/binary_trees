#include "binary_trees.h"

/**
 * binary_tree_nodes - function to counts the nodes
 * @tree: input
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		counter = 1;

	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);

	return (counter);
}
