#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Creates an array of integers
 * @min: Array start
 * @max: Array stop
 *
 * Return: Pointer to array of ints
 */
int *array_range(int min, int max)
{
	int *arr;
	int index, index2;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max + 1) - min));
	if (arr == NULL)
		return (NULL);
	for (index = min, index2 = 0; index <= max; index++, index2++)
		arr[index2] = index;
	return (arr);
}
