#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 *
 * @node: Is a pointer to be node to check.
 *
 * Return: 1 if node is a leaf, else 0 or 0 if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*binary_tree_is_root node = NULL;*/

	if (!node)
		return (0);

	else if (!(node->left) && !(node->right))
		return (1);

	return (0);
}
