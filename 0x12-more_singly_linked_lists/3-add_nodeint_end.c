#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of the list
 * @head: Head node in the list
 * @n: Info to populate node with
 *
 * Return: New Node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *endNode;

	if (head == NULL)
		return (NULL);
	endNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (endNode->next != NULL)
		endNode = endNode->next;
	endNode->next = newNode;
	return (endNode);
}
