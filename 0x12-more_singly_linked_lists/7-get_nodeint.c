#include "lists.h"

/**
 * get_nodeint_at_index - Return the node at the index
 * @head: Start of the linked list
 * @index: Index node to return
 *
 * Return: The node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodePointer;
	unsigned int count = 0;

	nodePointer = head;
	while (nodePointer != NULL)
	{
		if (count == index)
			return (nodePointer);
		count++;
		nodePointer = nodePointer->next;
	}
	return (nodePointer);
}
