#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to look for in string
 *
 * Return: Pointer to first occurance of character
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != 0)
	{
		if (s[x] == c)
		{
			break;
		}
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	return ('\0');
}
