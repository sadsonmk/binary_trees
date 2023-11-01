#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree with post-order.
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: If tree or func is NULL, else void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
