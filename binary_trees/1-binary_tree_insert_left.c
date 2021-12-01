#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: Pointer to the node to insert the left-child in.
 *
 * @value: Is the value to store in the new node.
 *
 * Return: A pointer to the new node or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	/*else {
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = parent;
		new_node->right = NULL;

		if (parent->left != NULL)
			parent->left = new_node;
			}*/

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}