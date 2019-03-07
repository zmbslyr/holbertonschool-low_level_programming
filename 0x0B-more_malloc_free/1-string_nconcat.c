#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concats two strings
 * @s1: String 1
 * @s2: String 2
 * @n: max number of bytes from s2
 *
 * Return: pointer to concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr, *empty;
	unsigned int index, indexS2;

	empty = "";
	if (s1 == NULL)
	{
		s1 = empty;
	}
	if (s2 == NULL)
	{
		s2 = empty;
	}
	for (index = 0; s1[index] != '\0'; index++)
		;
	concatStr = malloc((index + (sizeof(*s2) + 1) * sizeof(*concatStr)));
	if (concatStr == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
		concatStr[index] = s1[index];
	}
	for (indexS2 = 0; s2[indexS2] != '\0' && indexS2 < n; indexS2++, index++)
	{
		concatStr[index] = s2[indexS2];
	}
	concatStr[index] = '\0';
	return (concatStr);
}
