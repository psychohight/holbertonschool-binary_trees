#include "binary_trees.h"

/**
* main - print alphabet
*
* Return: Always c.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}