#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: Start of the linked list
 * @index: Index to delete at
 *
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode, *nodePointer;

	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	nodePointer = *head;
	while (nodePointer != NULL)
	{
		if (count + 1 == index)
		{
			deleteNode = nodePointer->next;
			nodePointer->next = deleteNode->next;
			free(deleteNode);
			return (1);
		}
		if (index == 0)
		{
			*head = nodePointer->next;
			free(nodePointer);
			return (1);
		}
		nodePointer = nodePointer->next;
		count++;
	}
	return (-1);
}
