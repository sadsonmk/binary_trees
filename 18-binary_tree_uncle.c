#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node else NULL if no uncle or if node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *curr, *uncle;

	if (node == NULL)
		return (NULL);
	curr = node->parent;
	while (curr != NULL)
	{
		if (curr->parent == NULL)
			return (NULL);
		else if (node->parent == curr->parent->right)
		{
			uncle = curr->parent->left;
			break;
		}
		else
		{
			uncle = curr->parent->right;
			break;
		}
	}

	return (uncle);
}
