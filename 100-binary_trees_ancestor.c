#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowes
 * @first: input
 * @second: input
 * Return: binary_tree_t
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *f_ances, *s_ances;

	for (f_ances = first; f_ances; f_ances= f_ances->parent)
		for (s_ances = second; s_ances; s_ances = s_ances->parent)
			if (f_ances == s_ances)
				return ((binary_tree_t *)f_ances);
	return (NULL);
}
