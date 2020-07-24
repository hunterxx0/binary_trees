#include "binary_trees.h"
/**
 * depth - depth of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: n
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;
	binary_tree_t *tmp = (binary_tree_t *)tree;

	while (tmp)
	{
		d++;
		tmp = tmp->left;
	}
	return (d);
}

/**
 * perfect - cheker of a Binary tree
 *
 * @tree: Pointer to the root node
 * @dep: depth of a tree
 * @lvl: level reched
 * Return: n
 */
bool perfect(const binary_tree_t *tree, int dep, int lvl)
{
	if (!tree)
		return (true);
	if (!tree->left && !tree->right)
		return (dep == lvl + 1);
	if (!tree->left || !tree->right)
		return (false);
	return (perfect(tree->left, dep, lvl + 1)
		&& perfect(tree->right, dep, lvl + 1));
}

/**
 * binary_tree_is_perfect - checks if a Binary tree is perfect
 *
 * @tree: Pointer to the root node
 * Return: n
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (perfect(tree, depth(tree), 0))
		return (1);
	return (0);
}
