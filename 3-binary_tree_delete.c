#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *curr, *right, *left;

	if (tree == NULL)
		return;
	curr = tree;

	if (curr->left == NULL && curr->right == NULL)
	{
		free(curr);
		return;
	}

	left = curr->left;
	right = curr->right;

	free(curr);

	binary_tree_delete(left);
	binary_tree_delete(right);

}
