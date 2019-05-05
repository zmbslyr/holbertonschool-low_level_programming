#include "lists.h"

/**
 * get_dnodeint_at_index - Returns a node at an index
 * @head: Start of the linked list
 * @index: Index to find node at
 *
 * Return: Node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *nodePointer;

	if (head == NULL)
		return (NULL);
	nodePointer = head;
       	for (count = 0; count < index && nodePointer != NULL; count++)
	{
		nodePointer = nodePointer->next;
		if (nodePointer == NULL)
			return (NULL);
	}
	return (nodePointer);
}
