#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node on the parent nodes left
 * @parent: Parent node
 * @value: Value to put in the new node
 *
 * Return: New node (Success) | NULL (Failure)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
