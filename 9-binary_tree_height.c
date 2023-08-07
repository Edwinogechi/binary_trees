#include "binary_trees.h"

/**
* binary_tree_height - Function that measures the height of a binary tree
* @tree: Pointer parameter to the root node of the tree being measured height
*
* Return: 0 otherwise, NULL (tree empty)
*
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t heightL; /* Height of the left subtree */
		size_t heightR; /* Height of the right subtree */

		/* Recursively calculate the height of the left subtree */
		heightL = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/* Recursively calculate the height of the right subtree */
		heightR = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Return the maximum height between the left and right subtrees */
		return ((heightL > heightR) ? heightL : heightR);
	}

	/* Return 0 if the tree is NULL (empty tree) */
	return (0);
}
