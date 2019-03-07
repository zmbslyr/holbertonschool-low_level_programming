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
	unsigned int lens1, lens2, index, indexS2;
	char *concatStr, *blank = "";

	if (s1)
	{
		lens1 = _strlen(s1);
	}
	else
	{
		lens1 = 0;
		s1 = blank;
	}
	if (s2)
	{
		lens2 = _strlen(s2);
	}
	else
	{
		lens2 = 0;
		s2 = blank;
	}
	concatStr = malloc((sizeof(char) * lens1) + 1 + n);
	if (concatStr == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index] != '\0'; index++)
	{
		concatStr[index] = s1[index];
	}
	if (lens2 < n)
	{
		for (indexS2 = 0; s2[indexS2] != '\0'; indexS2++, index++)
		{
			concatStr[index] = s2[indexS2];
		}
	}
	else
	{
		for (indexS2 = 0; indexS2 <= n; indexS2++, index++)
		{
			concatStr[index] = s2[indexS2];
		}
	}
	concatStr[index] = '\0';
	return (concatStr);
}

/**
 * _strlen - counts the length of a string
 * @str: string to be counted
 *
 * Return: Length of input string
 */
int _strlen(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;
	return (index);
}
