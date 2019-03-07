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
	unsigned int index = 0, lens2 = 0;
	int totLen = 0;
	char *concatStr, *newStringPointer, *s1Pointer, *s2Pointer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1Pointer = s1;
	s2Pointer = s2;
	for (; *s2Pointer; s2Pointer++)
		lens2++;
	for (; *s1Pointer; s1Pointer++)
		totLen++;
	if (n > lens2)
		totLen += lens2;
	else
	{
		for (; index < n; index++)
		{
			totLen++;
		}
	}
	concatStr = malloc(sizeof(char) * totLen + 1);
	newStringPointer = concatStr;
	if (concatStr == NULL)
		return (NULL);
	for (; *s1; s1++, newStringPointer++)
		*newStringPointer = *s1;
	if (n > lens2)
		for (; *s2; s2++, newStringPointer++)
			*newStringPointer = *s2;
	else
		for (index = 0; index < n; index++, s2++, newStringPointer++)
			*newStringPointer = *s2;
	*newStringPointer = '\0';
	return (concatStr);
}
