#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Destination array
 * @b: Byte to fill array
 * @n: Maximum bytes to fill
 *
 * Return: Pointer to destination array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;
	char *stringPointer = s;

	while (x < n)
	{
		*stringPointer = b;
		stringPointer++;
		x++;
	}
	return(s);
}
