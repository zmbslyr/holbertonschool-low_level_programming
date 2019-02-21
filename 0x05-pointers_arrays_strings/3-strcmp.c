#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: Difference
 */
int _strcmp(char *s1, char *s2)
{
	int x, diff;

	x = 0;
	while (s2[x] != '\0' || s1[x] != '\0')
	{
		if (s2[x] != s1[x])
		{
			diff = s1[x] - s2[x];
			break;
		}
		else
		{
			diff = 0;
		}
		s1++;
		s2++;
	}
	return (diff);
}
