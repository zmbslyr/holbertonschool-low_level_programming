#include "lists.h"

/**
 * listint_len - Prints the number of elements in a list
 * @h: Head node of the list
 *
 * Return: Number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
