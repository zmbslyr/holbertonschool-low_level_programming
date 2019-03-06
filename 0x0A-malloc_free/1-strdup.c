#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: String to be duplicated
 *
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	int index, size;
	char *newArray;

	size = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	newArray = malloc(sizeof(char) * size + 1);
	if (newArray == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= size; index ++)
	{
		newArray[index] = str[index];
	}
	return (newArray);
	free(newArray);
}

/**
 * _strlen - finds the length of a string
 * @str: string to find length of
 *
 * Return: Length of a string
 */
int _strlen(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
	}
	return (index);
}
