#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: Start of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nodePointer = head;

	while (nodePointer != NULL)
	{
		head = head->next;
		free(nodePointer->str);
		free(nodePointer);
		nodePointer = head;
	}
}
