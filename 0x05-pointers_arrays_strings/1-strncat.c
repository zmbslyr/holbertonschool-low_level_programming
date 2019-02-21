#include "holberton.h"

/**
 * _strncat - concatonates two strings
 * @dest: Destination string
 * @src: Source to append to dest
 * @n: Maximum number of bytes for rhe array
 *
 * Return: dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y, start;

	start = _strlen(dest);
	x = start;
	y = 0;
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}

/**
 * _strlen - counts the length of a string
 * @c: input string
 *
 * Return: Length of a string (Success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}
	return (i);
}
