#include "binary_trees.h"
/**
 * binary_tree_node - create tree node
 *@parent: the parent of that node
 *@value: contains the value of that node
 * Return: Address of new created node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;

node = malloc(sizeof(binary_tree_t));

if (!node)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
