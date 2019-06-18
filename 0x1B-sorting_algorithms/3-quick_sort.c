#include "sort.h"

/**
 * quick_sort - Calls recursive qSort function on array
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	qSort(array, size, 0, size - 1);
}

/**
 * partition - Function to partition the array
 * @array: Array to be partitioned
 * @size: Size of the array
 * @begin: beginning of the array
 * @piv: Turning point
 *
 * Return: void
 */
int partition(int *array, size_t size, int begin, int piv)
{
	int first, second, third;

	first = array[piv];
	second = begin - 1;
	third = piv + 1;
	while (1)
	{
		do third--;
		while (array[third] > first);
		do second++;
		while (array[second] < first);
		if (second >= third)
			return (second);
		swap(&array, second, third);
		print_array(array, size);
	}
}

/**
 * qSort - Sort an array using quicksort recursion
 * @array: array to be sorted
 * @size: size of the array
 * @begin: Beginning of the array
 * @last: End of the array
 *
 * Return: void
 */
void qSort(int *array, size_t size, int begin, int last)
{
	int store;

	if (last <= begin)
		return;
	store = partition(array, size, begin, last);
	qSort(array, size, begin, store - 1);
	qSort(array, size, store, last);
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
