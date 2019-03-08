#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in new array
 * @size: Size of the memory block
 *
 * Return: New allocated memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newMemBlock;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newMemBlock = malloc(nmemb * size);
	if (newMemBlock == NULL)
		return (NULL);
	for (index = 0; index < nmemb * size; index++)
	{
		newMemBlock[index] = 0;
	}
	return (newMemBlock);
}
