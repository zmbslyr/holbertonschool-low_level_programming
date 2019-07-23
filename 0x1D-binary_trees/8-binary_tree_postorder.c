#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the list using postorder traversal
 * @tree: tree to traverse
 * @func: function for callpack/print
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}