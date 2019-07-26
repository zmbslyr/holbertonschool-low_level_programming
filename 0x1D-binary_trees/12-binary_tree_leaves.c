#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in a binary tree
 * @tree: root node pointer
 * Return: returns num of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
