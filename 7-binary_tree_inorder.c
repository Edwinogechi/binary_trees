#include "binary_trees.h"

/**
 *binary_tree_inorder - Traverse the binary tree by in-order traversal
 *@tree: Pointer to the root node of the tree to traverse
 *@func: Function pointer to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
		;
	}

	else
	{
		/* Traverse recursively leftwards */
		binary_tree_inorder(tree->left, func);

		func(tree->n);

		/* Traverse recursively rightward */
		binary_tree_inorder(tree->right, func);
	}
}
