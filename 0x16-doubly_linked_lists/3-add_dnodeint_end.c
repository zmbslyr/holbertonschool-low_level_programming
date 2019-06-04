#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node to the end of a linked list
 * @head: Start of the linked list
 * @n: Data to store in node
 *
 * Return: Address of newNode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *endNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->prev = *head;
	newNode->n = n;
	if (*head == NULL)
		*head = newNode;
	else
	{
		endNode = *head;
		while (endNode->next != NULL)
			endNode = endNode->next;
		endNode->next = newNode;
		newNode->prev = endNode;
	}
	return (newNode);
}
