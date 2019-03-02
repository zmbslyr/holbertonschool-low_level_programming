#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string of characters
 *
 * Return: integer length of a string (Success)
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}
