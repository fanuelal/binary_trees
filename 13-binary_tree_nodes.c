#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes in a tree with children
 * @tree: tree to check
 * Return: number of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t node = 0;
if (!tree)
return (0);
if (tree->left || tree->right)
{
node += 1;
node += binary_tree_nodes(tree->right);
node += binary_tree_nodes(tree->left);
}
return (node);
}
