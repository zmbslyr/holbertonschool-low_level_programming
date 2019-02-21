#include "holberton.h"

/**
 * _strcat - concatonates two stings
 * @dest: destination for src
 * @src: Source sting to concatonate onto dest
 *
 *
 * Return: dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	y = 0;
	while (src[y] != 0)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	x++;
	dest[x] = '\n';
	return (dest);
}
