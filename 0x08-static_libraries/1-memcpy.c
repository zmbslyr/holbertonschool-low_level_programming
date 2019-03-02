#include "holberton.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Destination array
 * @src: Source array
 * @n: Max number of bytes to copy
 *
 * Return: Pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;
	char *stringPointerDest = dest;
	char *stringPointerSrc = src;

	while (x < n)
	{
		*stringPointerDest = *stringPointerSrc;
		stringPointerDest++;
		stringPointerSrc++;
		x++;
	}
	return (dest);
}
