#include "sort.h"

/**
 * radix_sort - sort via the radix method.
 * @array: array to be sorted.
 * @size: size of array.
 *
 * Return: VOID
 */
void radix_sort(int *array, size_t size)
{
	int i = 0, max = 0, exp = 1;

	if (array == NULL || size < 2)
		return;
	/* get max value (and no. of digits) */
	for (; i < (int)size; i++)
		if (max < array[i])
			max = array[i];

	for (exp = 1; max / exp > 0; exp *= 10)
		counting_sort_E(array, size, exp);
}

/**
 * counting_sort_E - modified version of counting_sort, uses exponent.
 * @array: array to sort.
 * @size: size of array.
 * @exp: exponent (value of digits being sorted).
 *
 * Return: VOID
 */
void counting_sort_E(int *array, size_t size, int exp)
{
	int *out, i, values[10] = {0};

	out = malloc(sizeof(int) * size);
	if (out == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		values[(array[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		values[i] += values[i - 1];
	for (i = size - 1; i >= 0; i--)
	{
		out[values[(array[i] / exp) % 10] - 1] = array[i];
		values[(array[i] / exp) % 10]--;
	}
	for (i = 0; i < (int)size; i++)
		array[i] = out[i];
	print_array(array, size);
	free(out);
}
