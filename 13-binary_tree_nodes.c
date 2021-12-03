#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least
 * 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*size_t cont = 0;*/

	if (tree == NULL)
		return (0);

	/**
	 *cont += binary_tree_nodes(tree->left);
	 *cont += binary_tree_nodes(tree->right);
	 */

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
	else
		return (0);
}
