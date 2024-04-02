#include "binary_trees.h"

/**
* main - print alphabet
*
* Return: Always c.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(NULL, value);

    if (new_node == NULL)
        return (NULL);

    new_node->parent =  parent;

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;

    return (new_node);
}