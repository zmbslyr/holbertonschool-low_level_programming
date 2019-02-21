#include "holberton.h"

/**
 * rot13 - encodes text in ROT13 encoding
 * @s: pointer to input string
 *
 * Return: encoded string (Success)
 */
char *rot13(char *s)
{
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (alp[y] != '\0')
		{
			if (s[x] == alp[y])
			{
				s[x] = rot[y];
				break;
			}
			y++;
		}
		x++;
	}
	return (s);
}
