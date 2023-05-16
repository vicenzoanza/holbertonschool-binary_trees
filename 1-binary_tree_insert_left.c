#include "binary_trees.h"
/**
 *
 *
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	return (NULL);

	parent->left = malloc(sizeof(binary_tree_t));
	if (parent->left == NULL)
	return (NULL);

	parent->left->n = value;
	parent->left->parent = parent;
	parent->left->left = NULL;
	parent->left->right = NULL;

return (parent->left);
}
