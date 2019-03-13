#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates over an array and enacts a function on the value
 * @array: array to be iterated through
 * @size: size of the array
 * @action: Function to be used on the value of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *arrayPointer = array;
	unsigned int index;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (index = 0; index < size; index++, arrayPointer++)
	{
		action(*arrayPointer);
	}
}
