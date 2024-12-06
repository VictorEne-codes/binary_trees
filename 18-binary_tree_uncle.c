#include "binary_trees.h"

/**
 * search_uncle - binary tree
 * @node: input
 * Return: binary_tree_t
 */

binary_tree_t *search_uncle(binary_tree_t *node)
{
	binary_tree_t *gpar = NULL;

	if (!node || !(node->parent))
		return (NULL);
	gpar = node->parent;
	if (gpar->left && (gpar->left != node))
		return (gpar->left);
	else if (gpar->right && (gpar->right != node))
		return (gpar->right);
	return (NULL);
}

/**
 * binary_tree_uncle - binary tree
 * @node: input
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (search_uncle(node->parent));
}
