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
	int x, len;

	len = _strlen(src);
	for (x = 0; src[x] < len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: Input string to be counted
 * 
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}