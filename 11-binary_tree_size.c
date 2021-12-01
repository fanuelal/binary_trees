#include "binary_trees.h"
/**
 *binary_tree_size - calc the size of the tree
 *@tree: size checked node
 *Return: size
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t l = 0, r = 0;
if (!tree)
return (0);
l = binary_tree_size(tree->left);
r = binary_tree_size(tree->right);
int sum = l + r;
return (sum + 1);
}
