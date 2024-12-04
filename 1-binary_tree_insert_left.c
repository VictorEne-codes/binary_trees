#include "binary_trees.h"

/**
 * binary_tree_insert_left - function entrt point
 * @parent: input
 * @value: input
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftp = NULL, *n_node = NULL;

	if (!parent)
		return (NULL);
	n_node = malloc(sizeof(binary_tree_t));

	if (!n_node)
		return (NULL);

	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->n = value;

	leftp = parent->left;
	parent->left = n_node;

	if (leftp)
	{
		leftp->parent = n_node;
		n_node->left = leftp;
	}

	return (n_node);
}
