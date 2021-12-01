#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 *
 * @parent: pointer that defines the parent.
 *
 * @value: Value of the node.
 *
 * Return: NULL or a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (new_node->right != NULL)
		parent->right = new_node;

	parent->right = new_node;

	return (new_node);
}
