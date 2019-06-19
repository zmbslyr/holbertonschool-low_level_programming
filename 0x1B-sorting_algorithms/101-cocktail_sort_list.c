#include "sort.h"

/**
 * cocktail_sort_list - Cocktail sort algorithm
 * @list: List to be sorted
 *
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *nodePointer;
	int swaps;

	if (list == NULL || *list == NULL)
		return;
	nodePointer = *list;
	do {
		swaps = 0;
		for (; nodePointer->next != NULL; nodePointer = nodePointer->next)
		{
			if (nodePointer->n > nodePointer->next->n)
			{
				swapNodes(list, nodePointer, nodePointer->next);
				nodePointer = nodePointer->prev;
				print_list(*list);
				swaps++;
			}
		}
		for (; nodePointer->prev != NULL; nodePointer = nodePointer->prev)
		{
			if (nodePointer->n < nodePointer->prev->n)
			{
				swapNodes(list, nodePointer->prev, nodePointer);
				nodePointer = nodePointer->next;
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
void swapNodes(listint_t **list, listint_t *first, listint_t *second)
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
