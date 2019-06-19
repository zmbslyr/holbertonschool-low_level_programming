#include "sort.h"

/**
 * cocktail_sort_list - Cocktail sort algorithm
 * @list: List to be sorted
 *
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *node;
	int swaps;

	if (list == NULL || *list == NULL)
		return;
	node = *list;
	do {
		swaps = 0;
		for (; node->next != NULL; node = node->next)
		{
			if (node->n > node->next->n)
			{
				swapNodes(list, node, node->next);
				node = node->prev;
				print_list(*list);
				swaps++;
			}
		}
		for (; node->prev != NULL; node = node->prev)
		{
			if (node->n < node->prev->n)
			{
				swapNodes(list, node->prev, node);
				node = node->next;
				print_list(*list);
				swaps++;
			}
		}
	} while (swaps != 0);
}

/**
 * swapNodes - Function to swap two adjacent nodes
 * @list: Doubly linked list
 * @second: second node to swap
 * @first: first node to swap
 *
 * Return: void
 */
void swapNodes(listint_t **list, listint_t *second, listint_t *first)
{
	second->prev = first->prev;
	first->prev = second;
	first->next = second->next;
	second->next = first;
	if (first->next != NULL)
		first->next->prev = first;
	if (second->prev == NULL)
		*list = second;
	else
		second->prev->next = second;
}
