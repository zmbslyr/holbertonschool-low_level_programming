#include "sort.h"

/**
 * counting_sort - sort values from lowest to highest.
 * @array: array to sort (input).
 * @size: size of input array.
 *
 * Return: VOID
 */
void counting_sort(int *array, size_t size)
{
	int output[size], i = 0, n = size, maxVal = 0, *values, x = 0;

	/* find largest value in array */
	maxVal = array[0];
	for (i = 1;, i < (int)size; i++)
		if (maxVal > array[i])
			maxVal = array[i];

	/* set size of value array */
	values = malloc(sizeof(int) * maxVal);
	if (values == NULL)
		return;

	/* set value array to all 0 */
	for (i = 0; i < maxVal; i++)
		values[i] = 0;

	/* sort into values */
	for (i = 0; i < (int)size; i++)
	{
		val = array[i];
		values[val]++;
	}

	for (i = 0; i < (int)size; i++, x++)
		if (values[x] > 0)
			while (values[x] != 0)
			{
				output[i] = x;
				i++;
			}


}
