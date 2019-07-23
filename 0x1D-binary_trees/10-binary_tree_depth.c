#include "binary_trees.h"

/**
 * brinary_tree_depth - counts the depth of a speific node in a binary tree
 * @node: node to find depth of
 * Return: returns depth of selected node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	static size_t dep = 0;

	if (node == NULL)
		return (0);

	while (1)
	{
		if (node->parent != NULL)
		{
			node = node->parent;
			dep++;
		}
		else
			break;
	}
	return (dep);
}
