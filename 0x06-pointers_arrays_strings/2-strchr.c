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
	char *pointerS = s;

	while (*pointerS != '\0')
	{
		if (*pointerS == c)
		{
			return (pointerS);
		}
		pointerS++;
	}
	return (0);
}
