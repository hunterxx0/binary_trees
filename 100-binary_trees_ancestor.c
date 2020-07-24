#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * @tree: tree
 * Return: Always
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		d = binary_tree_depth(tree->parent) + 1;
	else
		d = 0;

return (d);
}


/**
 * binary_trees_ancestor - Entry point
 * @first: first node
 * @second: second node
 * Return: lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	int d1;
	int d2;
	binary_tree_t *f = (binary_tree_t *)first, *s = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	d1 = binary_tree_depth(first);
	d2 = binary_tree_depth(second);

	for (; d1 > d2 ; d1--)
		f = f->parent;
	for (; d2 > d1 ; d2--)
		s = s->parent;

	while (f && s)
	{
		if (f == s)
			return (f);
		f = f->parent;
		s = s->parent;
	}

return (NULL);
}
