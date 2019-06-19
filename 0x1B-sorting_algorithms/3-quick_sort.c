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
	if (array == NULL)
		return;
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

	if (array == NULL)
		return (-1);
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
		swap2(array, size, second, third);
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

	if (array == NULL)
		return;
	if (last <= begin)
		return;
	store = partition(array, size, begin, last);
	qSort(array, size, begin, store - 1);
	qSort(array, size, store, last);
}

/**
 * swap2 - Swaps positions in an array
 * @array: Array to swap elements in
 * @size: Size of the array
 * @index: First index
 * @index2: Second index
 *
 * Return: void
 */
void swap2(int *array, size_t size, int index, int index2)
{
	int swap;

	if (array == NULL)
		return;
	swap = array[index];
	array[index] = array[index2];
	array[index2] = swap;
	if (array[index] != array[index2])
		print_array(array, size);
}
