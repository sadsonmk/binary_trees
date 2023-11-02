#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: a positive or negative int to show balance or zero if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int counter1 = 0, counter2 = 0;

	if (tree == NULL)
		return (0);
	counter1 = binary_tree_height(tree->left);
	counter2 = binary_tree_height(tree->right);

	return (counter1 - counter2);
}
