#include "binary_trees.h"
/**
 *binary_tree_size - calc the size of the tree
 *@tree: size checked node
 *Return: size
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t sum = 0;
if (!tree)
return (0);
sum = binary_tree_size(tree->left) + binary_tree_size(tree->right);
return (sum + 1);
}
