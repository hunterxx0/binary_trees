#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: Always
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

if (tree->left)
	l = binary_tree_height(tree->left) + 1;
else
	l = 1;

if (tree->right)
	r = binary_tree_height(tree->right) + 1;
else
	r = 1;

if (l > r)
	return (l);
else
	return (r);

}

/**
 * printLevelOrder - Entry point
 * @tree: tree
 * @level: lvl
 * @func: function
 * Return: Always
 */

void printLevelOrder(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		printLevelOrder(tree->left, level - 1, func);
		printLevelOrder(tree->right, level - 1, func);
	}
}


/**
 * binary_tree_levelorder - Entry point
 * @tree: tree
 * @func: function
 * Return: Always
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = binary_tree_height(tree);
	int i;
if (!tree || !func)
	return;

	for (i = 1 ; i <= h ; i++)
		printLevelOrder(tree, i, func);

}
