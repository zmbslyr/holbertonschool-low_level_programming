#include "holberton.h"

/**
 * string_toupper - Changes any lowercase characters in a string to uppercase
 * @s: input string
 *
 * Return: uppercase character
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 97 && s[x] <= 122)
		{
			s[x] = (int)s[x] - 32;
		}
		x++;
	}
	return (s);
}
