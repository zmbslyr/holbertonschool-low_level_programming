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
	int i = 0, maxVal = 0, *values, x = 0, val = 0;

	if (array == NULL || size < 2)
		return;

	maxVal = array[0];
	for (i = 1; i < (int)size; i++)
		if (maxVal < array[i])
			maxVal = array[i];
	maxVal++;
	values = malloc(sizeof(int) * maxVal);
	if (values == NULL)
		return;
	for (i = 0; i < maxVal; i++)
		values[i] = 0;
	for (i = 0; i < (int)size; i++)
	{
		val = array[i];
		values[val]++;
	}
	for (i = 1; i < maxVal; i++)
		values[i] += values[i - 1];
	print_array(values, maxVal);
	for (i = maxVal - 1; i > 0; i--)
		values[i] -= values[i - 1];
	for (i = 0; i < (int)size; x++)
		while (values[x] > 0)
		{
			array[i] = x;
			values[x]--;
			i++;
		}
	free(values);
}
