#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return NULL;

    node->parent = parent;
    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent != NULL)
    {
        if (parent->left == NULL)
            parent->left = node;
        else
            parent->right = node;
    }

    return node;
}

