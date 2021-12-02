#include "binary_trees.h"
   
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
/**
 * binary_tree_balance - Measure balance factor of a binary tree
 * @tree: tree to go 
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int l = 0, r = 0;

if (!tree)
return (0);
l = tree->left ? (int)binary_tree_height(tree->left) : -1;
r = tree->right ? (int)binary_tree_height(tree->right) : -1;
return (l-r);
}
