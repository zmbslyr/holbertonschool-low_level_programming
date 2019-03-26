#include "lists.h"

/**
 * print_listint - prints a singly linked list of ints
 * @h: Head node in the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
