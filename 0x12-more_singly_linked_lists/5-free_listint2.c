#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nodePointer;

	while (head != NULL && *head != NULL)
	{
		nodePointer = *head;
		*head = nodePointer->next;
		free(nodePointer);
	}
}
