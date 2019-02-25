#include "holberton.h"

/**
 * _strpbrk - Searhes a string for any set of bytes
 * @s: Input string
 * @accept: Set to search for
 *
 * Return: pointer to characters placs
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return ('\0');
}
