#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds a sibling of a Binary tree's node
 *
 * @node: Pointer to the node to be checked
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par = NULL;

	if (!node || !node->parent)
		return (NULL);
	par = node->parent;
	if (par->left == node && par->right)
		return (par->right);
	else if (par->right == node && par->left)
		return (par->left);
	return (NULL);
}
