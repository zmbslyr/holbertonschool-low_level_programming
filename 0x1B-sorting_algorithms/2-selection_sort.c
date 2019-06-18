#include "sort.h"

/**
 * selection_sort - Function to use selection sort on an array
 * @array: Array to sort
 * @size: Size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t index, count, store, swap;

	for (index = 0; index < size - 1; index++)
	{
		swap = index;
		for (count = index + 1; count < size; count++)
		{
			if (array[count] < array[index] && array[count] < array[swap])
				swap = count;
		}
		if (swap != index)
		{
			store = array[index];
			array[index] = array[swap];
			array[swap] = store;
			print_array(array, size);
		}
	}
}
