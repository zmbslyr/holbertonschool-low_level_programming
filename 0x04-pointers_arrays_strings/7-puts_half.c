#include "holberton.h"

/**
 * puts_half - Prints second half of a string
 * @str: String to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index, len;

	len = _strlen(str) + 1;
	for (index = len / 2; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}

/**
 * _strlen - Finds the length of a string
 * @s: String to be counted
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
