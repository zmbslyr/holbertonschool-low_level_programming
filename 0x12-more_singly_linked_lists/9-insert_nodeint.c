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
	listint_t *newNode, *nodePointer;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (nodePointer != NULL)
	{
		if (count + 1 == idx)
		{
			newNode->next = nodePointer->next;
			nodePointer->next = newNode;
			return (newNode);
		}
		nodePointer = nodePointer->next;
		count++;
	}
	free(newNode);
	return (NULL);
}
