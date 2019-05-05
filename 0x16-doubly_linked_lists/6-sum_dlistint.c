#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all nodes in list
 * @head: The start of the linked list
 *
 * Return: Sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nodePointer;
	int sum = 0;

	if (head == NULL)
		return (0);
	nodePointer = head;
	while (nodePointer != NULL)
	{
		sum += nodePointer->n;
		nodePointer = nodePointer->next;
	}
	return (sum);
}
