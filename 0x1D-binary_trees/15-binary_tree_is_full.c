#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a node has two children or no children
 * @tree: Tree to check
 *
 * Return: 1 if tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right == NULL)
		return (0);
	if (tree->right != NULL && tree->left == NULL)
		return (0);
	return (0);
}
