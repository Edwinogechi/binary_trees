#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of agiven node
 *@parent: a pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *
 *Return: a pointer to the created node; NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	/* create new node */
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/* initialize new node with the present nodes too */
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	/* if parent has a left node presently */
	if (parent->left != NULL)
	{
		new->left = parent->left; /* old left is now new's left */
		parent->left->parent = new; /* old left is now new's left */
	}
	parent->left = new; /* point parent's left to new node */

	return (new);
}
