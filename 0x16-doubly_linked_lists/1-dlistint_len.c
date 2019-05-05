#include "lists.h"

/**
 * dlistint_len - Finds the length of a linked list
 * @h: Start if the linked list
 *
 * Return: Length of a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
