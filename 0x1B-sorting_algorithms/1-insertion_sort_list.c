#include "sort.h"

/**
 * insertion_sort_list -Function to use insertion sort on a doubly linked list
 * @list: List to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *here, *store;

	if (*list == NULL || list == NULL)
		return;
	here = (*list)->next;
	while (here != NULL)
	{
		if (here->prev->n > here->n)
		{
			store = here->next;
			while (here->prev != NULL)
			{
				if (here->n < here->prev->n)
				{
					swapPrevious(here);
					while ((*list)->prev != NULL)
						(*list) = (*list)->prev;
					print_list(*list);
				}
				else
					break;
			}
			here = store;
		}
		else
			here = here->next;
	}
}

/**
 * swapPrevious - Swaps node to previous node
 * @node: Node to be swapped
 *
 * Return: void
 */
void swapPrevious(listint_t *node)
{
	listint_t *last, *lastLast, *next;

	if (node->prev == NULL)
		return;
	last = node->prev;
	lastLast = last->prev;
	next = node->next;
	if (lastLast != NULL)
		lastLast->next = node;
	node->prev = lastLast;
	node->next = last;
	last->prev = node;
	last->next = next;
	if (next != NULL)
		next->prev = last;
}
