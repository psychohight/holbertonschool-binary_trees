#include "binary_trees.h"

/**
* main - print alphabet
*
* Return: Always c.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    
    func(tree->n);

    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}