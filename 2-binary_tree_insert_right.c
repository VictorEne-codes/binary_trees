#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to inserts a node as the right-child
 * @parent: input
 * @value: input
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n = NULL;

	if (!parent)
		return (NULL);

	n = malloc(sizeof(binary_tree_t));

	if (!n)
		return (NULL);

	n->n = value;
	n->left = NULL;

	if (parent->right == NULL)
	{
		n->parent = parent;
		n->right = NULL;
		parent->right = n;
	}
	else
	{
		n->parent = parent;
		n->right = parent->right;
		parent->right = n;
		n->right->parent = n;
	}
	return (n);
}
