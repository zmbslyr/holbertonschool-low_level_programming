#include "holberton.h"

/**
 * cap_string - Capitalizes strings
 * @s: pointer to input string
 *
 * Return: Capital at first character of string
 */
char *cap_string(char *s)
{
	char d[] = " \t\n,:.!?\"(){}";
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		y = 0;
		while (d[y] != '\0')
		{
			if (s[x] == d[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
			{
				s[x + 1] = s[x + 1] - 32;
			}
			y++;
		}
		x++;
	}
	return (s);
}
