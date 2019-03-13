#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array to compare to
 * @size: Size of the array
 * @cmp: Pointer to function to compare values
 *
 * Return: index if successful || -1 if failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *arrayPointer = array;
	int index;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++, arrayPointer++)
	{
		if (cmp(*arrayPointer) != 0)
			return (index);
	}
	return (-1);
}
