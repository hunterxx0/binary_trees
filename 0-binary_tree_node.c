#include "binary_trees.h"


/**
 * binary_tree_node - Entry point
 * @parent: node
 * @value: value
 * Return: Always
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = NULL;

new = malloc(sizeof(binary_tree_t));
if (!new)
	return (NULL);
new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;



return (new);
}
