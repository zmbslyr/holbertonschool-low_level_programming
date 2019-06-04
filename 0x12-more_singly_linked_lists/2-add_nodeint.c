#include "lists.h"

/**
 * add_nodeint - Adds a node to an int list
 * @head: Head node in the list
 * @n: Integer to populate node with
 *
 * Return: New Node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
