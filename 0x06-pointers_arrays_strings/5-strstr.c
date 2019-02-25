#include "holberton.h"

/**
 * _strstr - finds a sub-string in a string
 * @haystack: String to search through
 * @needle: Sub-string to search for
 *
 * Return: Beginning of sub-string in string
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y, z;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0, z = x; needle[y] != '\0'; y++, z++)
		{
			if (haystack[z] != needle[y] || haystack[z] == '\0')
			{
				break;
			}
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
	}
	return ('\0');
}
