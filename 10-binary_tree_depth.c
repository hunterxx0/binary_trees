#include "binary_trees.h"
/**
 * depth - Depth of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: dep
 */
size_t depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (!tree)
		return (0);
	dep = depth(tree->parent);
	return (dep + 1);
}
/**
 * binary_tree_depth - Depth of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: dep
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (!tree)
		return (0);
	dep = depth(tree);
	return (dep - 1);
}
