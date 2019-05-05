#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Start of the linked list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodePointer;

	while (head != NULL)
	{
		nodePointer = head;
		head = head->next;
		free(nodePointer);
	}
}
