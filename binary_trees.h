#ifndef BINARY_TREES_H
#define BINARY_TREES_H

typedef struct binary_tree_s binary_tree_t;
struct binary_tree_s
{
    int n;
    binary_tree_t *parent;
    binary_tree_t *left;
    binary_tree_t *right;
};

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */

