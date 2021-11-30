#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserting value in the right
 *@parent: parent of t he node
 *@value: value of new node
 *
 *Return: the address of new node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *nodeR;
nodeR = malloc(sizeof(binary_tree_t));
if (!nodeR)
return (NULL);
nodeR->n = value;
nodeR->parent = parent;
nodeR->left = NULL;
nodeR->right = parent->right;
parent->right  = nodeR;
if (nodeR->right)
nodeR->right->parent = nodeR;
return (nodeR);
}
