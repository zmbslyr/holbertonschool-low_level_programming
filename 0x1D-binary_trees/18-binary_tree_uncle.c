#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: pointer to node to find uncle of
 * Return: returns uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent->parent == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL &&
		node->parent->parent->right != NULL)
	{
		if (node->parent->parent->right->n != node->parent->n)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
