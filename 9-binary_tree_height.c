#include "binary_trees.h"
/**
 * height - Height of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: rh + 1 or lh + 1
 */
size_t height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (!tree)
		return (0);
	lh = height(tree->left);
	rh = height(tree->right);
	if (lh > rh)
		return (lh + 1);
	return (rh + 1);
}
/**
 * binary_tree_height - Height of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: rh or lh
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hei = 0;

	if (!tree)
		return (0);
	hei = height(tree);
	return (hei - 1);
}
