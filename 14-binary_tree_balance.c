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
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);
	
	balance_factor = left_height - right_height;
	return (balance_factor);
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
