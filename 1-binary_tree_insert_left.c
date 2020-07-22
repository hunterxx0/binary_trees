#include "binary_trees.h"


/**
 * binary_tree_insert_left - Entry point
 * @parent: node
 * @value: value
 * Return: Always
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left = NULL, *tmp = NULL;

if (!parent)
	return (NULL);

left = binary_tree_node(parent, value);
if (!parent->left)
	parent->left = left;
else
	{
	tmp = parent->left;
	parent->left = left;
	tmp->parent = left;
	left->left = tmp;
	}

return (left);
}
