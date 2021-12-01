#include "binary_trees.h"
/**
 *binary_tree_height - height of a binary
 *@tree: the node to check the height
 *Return: the height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t r = 0, l = 0;
if (!tree)
return (0);
r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
if (r > l)
return (r);
return (l);
}
