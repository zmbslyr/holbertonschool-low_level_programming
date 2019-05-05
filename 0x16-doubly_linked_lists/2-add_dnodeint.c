#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the list
 * @head: Start of the linked list
 * @n: Data to store in node
 *
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(**head).prev = new;
	*head = newNode;
	return (newNode);
}
