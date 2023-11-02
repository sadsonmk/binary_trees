#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect and 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *curr, *curr1;
	int left1 = 0, right2 = 0;

	if (tree == NULL)
		return (0);
	curr = tree;
	curr1 = tree;
	while (curr->left != NULL)
	{
		left1++;
		curr = curr->left;
	}
	if (curr->right != NULL)
		left1++;

	while (curr1->right != NULL)
	{
		right2++;
		curr1 = curr1->right;
	}
	if (curr1->left != NULL)
		right2++;

	if (left1 == right2)
		return (1);
	return (0);

}
