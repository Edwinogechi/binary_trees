#include "binary_trees.h"

/**
 * binary_tree_postorder - a function traversing a binary tree by post-order
 * @tree: Pointer to the root node of the tree to be traversed
 * @func: a function pointer to call for each node
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* The base case */
	if ((tree == NULL) || (func == NULL))
		return;

	/* Traverse recursively on the subtree from left then right */
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
