#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: Array to put src in
 * @src: String to copy to dest
 *
 * Return: Pointer to string dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
