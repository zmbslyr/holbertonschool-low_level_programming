#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node on right branch
 * @parent: Parent node of the inserted node
 * @value: Value to put in new node
 *
 * Return: Pointer to new node (Success) | NULL (Failure)
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
		parent->right = rightNode;
	}
	parent->right = rightNode;
	return (rightNode);
}
