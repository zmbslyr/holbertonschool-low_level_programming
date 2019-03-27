#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at index
 * @head: Start of the linked list
 * @idx: Index to put new node at
 * @n: Data to be stored in node
 *
 * Return: New node if success, NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *nodePointer;
	unsigned int count = 1;

	if (head == NULL || *head == NULL)
		return (NULL);
	nodePointer = *head;
	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		if (*head == NULL)
		{
			*head = newNode;
			newNode->next = NULL;
		}
		else if (*head != NULL)
		{
			newNode->next = *head;
			*head = newNode;
		}
		return (newNode);
	}
	for (; count <= idx - 1 && nodePointer != NULL; count++)
		nodePointer = nodePointer->next;
	if (nodePointer == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = nodePointer->next;
	nodePointer->next = newNode;
	return (newNode);
}
