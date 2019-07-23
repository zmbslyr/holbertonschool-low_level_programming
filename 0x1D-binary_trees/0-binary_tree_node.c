#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node in a binary tree
 * @parent: Parent of the node to create
 * @value: Value to populate node with
 *
 * Return: Pointer to new node (Success) | NULL (Failure)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
