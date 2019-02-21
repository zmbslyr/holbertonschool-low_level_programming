#include "holberton.h"

/**
 * leet - Converts string into leet speak
 * @s: pointer to string to be converted
 *
 * Return: converts char to leet speak
 */
char *leet(char *s)
{
	char leet[] = "aAeEoOtTlL";
	char speak[] = "4433007711";
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (leet[y] != '\0')
		{
			if (s[x] == leet[y])
			{
				s[x] = speak[y];
			}
			y++;
		}
		x++;
	}
	return (s);
}
