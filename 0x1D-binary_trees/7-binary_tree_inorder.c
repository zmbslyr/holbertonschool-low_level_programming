#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree inorder
 * @tree: Binary tree to traverse
 * @func: Function to print integer
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
