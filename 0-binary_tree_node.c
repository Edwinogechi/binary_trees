#include "binary_trees.h"

/**
 * binary_tree_node - the function that creates a binary tree node
 * @parent: pointer to the parent node of the new node to be created
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node or success, or NULL on failure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declare pointer to new node and pointer for insertion */
	binary_tree_t *new_node;

	/* Allocate memory for new node but if fail, return NULL */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign values to new node created or NULL */
	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;
	new_node->right = NULL;

	return (new_node);
}
