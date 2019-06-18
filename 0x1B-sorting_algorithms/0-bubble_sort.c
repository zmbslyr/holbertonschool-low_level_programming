#include "sort.h"

/**
 * bubble_sort - Function to Bubble Sort an array of integers
 * @array: Array to sort
 * @size: Size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, count;

	if (size < 1 || array == NULL)
		return;
	for (index = 0; index < size - 1; index++)
	{
		for (count = 0; count < size - index - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				swap(&array, count, count + 1);
				print_array(array, size);
			}
		}
	}
}

/**
 * swap - Swaps positions in an array
 * @array: Array to swap elements in
 * @index: First index
 * @index2: Second index
 *
 * Return: void
 */
void swap(int **array, int index, int index2)
{
	int swap;

	swap = (*array)[index];
	(*array)[index] = (*array)[index2];
	(*array)[index2] = swap;
}
