#include "lists.h"

/**
 * sum_listint - return the sum of all data in linked list
 * @head: Head of the linked list
 *
 * Return: Returns the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *nodePointer = head;
	unsigned int sum = 0;

	while (nodePointer != NULL)
	{
		sum += nodePointer->n;
		nodePointer = nodePointer->next;
	}
	return (sum);
}
