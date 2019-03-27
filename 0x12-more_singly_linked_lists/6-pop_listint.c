#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns it's data
 * @head: First node in list
 *
 * Return: Data from head
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *nodePointer;

	if (*head == NULL)
		return (0);
	nodePointer = *head;
	*head = nodePointer->next;
	data = nodePointer->n;
	free(nodePointer);
	return (data);
}
