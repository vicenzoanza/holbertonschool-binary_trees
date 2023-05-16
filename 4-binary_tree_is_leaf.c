#include "binary_trees.h"

int
binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
	return (1);
	else
	return (0);
}

