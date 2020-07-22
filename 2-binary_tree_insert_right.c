#include "binary_trees.h"


/**
 * binary_tree_insert_right - Entry point
 * @parent: node
 * @value: value
 * Return: Always
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *right = NULL, *tmp = NULL;

if (!parent)
	return (NULL);

right = binary_tree_node(parent, value);
if (!parent->right)
	parent->right = right;
else
	{
	tmp = parent->right;
	parent->right = right;
	tmp->parent = right;
	right->right = tmp;
	}

return (right);
}
