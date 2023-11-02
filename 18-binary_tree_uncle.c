#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node else NULL if no uncle or if node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa, *curr, *uncle;

	if (node == NULL)
		return (NULL);
	curr = node->parent;
	grandpa = curr->parent;

	if (curr == NULL || grandpa == NULL)
		return (NULL);
	else if (grandpa->left == NULL || grandpa->right == NULL)
		return (NULL);
	else if (curr == grandpa->right)
	{
		uncle = grandpa->left;
	}
	else if (curr == grandpa->left)
	{
		uncle = grandpa->right;
	}

	return (uncle);
}
