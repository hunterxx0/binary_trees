#include "binary_trees.h"
/**
 * height - Nodes number of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: n
 */
int height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);
	l = height(tree->left);
	r = height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}


/**
 * binary_tree_balance - balance of a Binary tree
 *
 * @tree: Pointer to the root node
 * Return: n
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	r = height(tree->right) - 1;
	l = height(tree->left) - 1;




	return (l - r);
}
