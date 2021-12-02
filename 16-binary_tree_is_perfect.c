#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node
 *
 * Return: 1 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h = 0, s = 0, p = 0;
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
h =  binary_tree_height(tree);
s = binary_tree_size(tree);
p = (size_t)powH(h + 1);
return (p - 1 == s);
}
/**
 *powH - returns the value of x raised to the power of y
 *@x: the value of the power
 *Return: x to the power of y
 **/
int powH(int x)
{
int pow;
if (x < 0)
return (-1);
if (x == 0)
return (1);
pow = 2 * powH(x - 1);
return (pow);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
