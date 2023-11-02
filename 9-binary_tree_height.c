#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the binary_tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter1, counter2;

	counter1 = 0;
	counter2 = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		counter1 = binary_tree_height(tree->left) + 1;
	else
		counter1 = 0;
	if (tree->right)
		counter2 = binary_tree_height(tree->right) + 1;
	else
		counter2 = 0;

	if (counter1 > counter2)
		return (counter1);
	return (counter2);
}
