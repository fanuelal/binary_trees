#include "binary_trees.h"
/**
 *binary_tree_postorder - post orderer
 *@tree: tree to traverse
 *@func: pointer func to display the value
 *
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
