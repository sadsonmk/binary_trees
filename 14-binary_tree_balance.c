#include "binary_trees.h"

int _max(int x, int y);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: a positive or negative int to show balance or zero if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);


	return (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
}

/**
 * _max - calculates the maximum of two integers
 * @x: is the first input of the two ints
 * @y: is the second input of the two ints
 *
 * Return: the bigger one of the the two inputs
 */

int _max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}
