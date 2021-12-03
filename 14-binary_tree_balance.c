#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures
 * the balance factor of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}
