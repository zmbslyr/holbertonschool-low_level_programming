#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array using malloc
 * @size: Size of array
 * @c: Character to initialize array with
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(c) * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= size; index++)
	{
		pointer[index] = c;
	}
	return (pointer);
}
