#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - finds the length of linked list
 * @h: Linked list head
 *
 * Return: Length of linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
