#include "binary_trees.h"
/**
 *binary_tree_insert_left - insert node on left
 *@parent: parent node
 *@value: the child value
 *
 *Return: created node address
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left;
left = malloc(sizeof(binary_tree_t));
if (!left)
  return (NULL);
left->n = value;
left->parent = parent;
left->right = NULL;
left->left = parent->left;
parent->left = left;
if (left->left)
left->left->parent =  left;

return (left);
}
