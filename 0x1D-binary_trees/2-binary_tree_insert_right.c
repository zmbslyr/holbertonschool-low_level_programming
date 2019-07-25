#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right in tree
 * @parent: pointer to parent node
 * @value: vlaue of new node
 * Return: returns new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	if (parent == NULL)
		return (NULL);
	rightNode = binary_tree_node(parent, value);
	if (rightNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		rightNode->right->parent = rightNode;
	}
	parent->right = rightNode;
	return (rightNode);
}
