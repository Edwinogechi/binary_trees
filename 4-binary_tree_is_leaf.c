#include "binary_trees.h"


/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Parameter pointer to the node to check
 * Return: 1 if node is a leaf
 * Otherwise - return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	/* Check if the provided node is NULL */
	if (node == NULL)
	{
		return (0);
	}

	/* Check if the provided node doesnt have two children */
	if ((node->left == NULL) && (node->right == NULL))
	{
		return (1);
	}

	return (0);
}
