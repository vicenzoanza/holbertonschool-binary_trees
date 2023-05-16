#include "binary_trees.h"
/**
 *
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        if (parent == NULL)
        return (NULL);

        parent->right = malloc(sizeof(binary_tree_t));
        if (parent->right == NULL)
        return (NULL);

        parent->right->n = value;
        parent->right->parent = parent;
        parent->right->left = NULL;
        parent->right->right = NULL;

return (parent->right);
}
