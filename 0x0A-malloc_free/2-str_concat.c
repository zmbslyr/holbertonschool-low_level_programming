#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatonates two strings
 * @s1: String 1
 * @s2: string 2
 *
 * Return: Pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, strConcatLen, index, s2Index;
	char *strConcat;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	strConcatLen = s1len + s2len;
	strConcat = malloc(sizeof(*s1) * strConcatLen);
	if (strConcat == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= s1len; index++)
	{
		strConcat[index] = s1[index];
	}
	for (s2Index = 0, index = index -1; s2Index <= s2len; index++, s2Index++)
	{
		strConcat[index] = s2[s2Index];
	}
	strConcat[index + 1] = '\0';
	return (strConcat);
}

/**
 * _strlen - Finds the length of a string
 * @str: string to find length of
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;
	return (index);
}
