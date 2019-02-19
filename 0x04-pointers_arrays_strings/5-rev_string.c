#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int x, y, z;
	char l;

	for (x = 0; s[x] != 0; x++)
	{
	}
	y = x - 1;
	z = 0;
	while (y >= z)
	{
		l = s[y];
		s[y] = s[z];
		s[z] = l;
		z++;
		y--;
	}
}
