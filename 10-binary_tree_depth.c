#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  is a pointer to the node to measure the depth
 * Return: if tree NULL zero, else the height of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *curr;

	if (tree == NULL)
		return (0);

	curr = tree;
	while (curr->parent != NULL)
	{
		depth++;
		curr = curr->parent;
	}

	return (depth);

}
