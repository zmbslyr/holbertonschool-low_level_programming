#include "binary_trees.h"

/**
 * binary_tree_depth - counts the depth of a speific tree in a binary tree
 * @tree: tree to find depth of
 * Return: returns depth of selected tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	static size_t dep;

	dep = 0;
	if (tree == NULL)
		return (0);

	while (1)
	{
		if (tree->parent != NULL)
		{
			tree = tree->parent;
			dep++;
		}
		else
			break;
	}
	return (dep);
}
