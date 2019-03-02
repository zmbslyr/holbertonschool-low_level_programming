#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to check against
 * @accept: Characters ti check for in string
 *
 * Return: Length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				z = 1;
			}
			y++;
		}
		y = 0;
		if (z == 0)
		{
			break;
		}
		x++;
	}
	return (x);
}
