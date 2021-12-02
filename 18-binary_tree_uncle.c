#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent->parent)
return (NULL);
if (node->parent != node->parent->parent->right)
{
if (!node->parent->parent->right)
return (NULL);
return (node->parent->parent->right);
}
else
{
if (!node->parent->parent->left)
return (NULL);
return (node->parent->parent->left);
}
}
