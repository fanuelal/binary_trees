#include "binary_trees.h"
/**
 * binary_tree_leaves - counter of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t l = 0, r = 0, leaf = 0;
if (!tree)
return (0);
l = binary_tree_leaves(tree->left);
r = binary_tree_leaves(tree->right);
leaf = r + l;
return ((!l && !r) ? leaf + 1 : leaf + 0);
}
