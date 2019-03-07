#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocates memory
 * @b: Size of memory block
 *
 * Return: Pointer to memory block
 */
void *malloc_checked(unsigned int b)
{
	int *array;

	array =  malloc(sizeof(b) * b);
	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
