#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to destination array
 * @src: Pointer to string to put in array
 * @n: max number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (src[x] != 0 && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
