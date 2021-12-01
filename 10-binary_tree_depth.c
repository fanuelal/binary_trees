#include "binary_trees.h"
/**
 *binary_tree_depth - checking the depth of the tre
 *@tree: node to check the depth
 *Return: the depth
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t d = 0;
if (!tree)
return (0);
d = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
return (d);
}
