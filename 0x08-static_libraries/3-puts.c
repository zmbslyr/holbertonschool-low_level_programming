#include "holberton.h"

/**
 * _puts - prints a string
 * @str: input string
 *
 * Return: void
 */
void _puts(char *str)
{
	int x;
	char l;

	for (x = 0; str[x] != 0; x++)
	{
		l = str[x];
		_putchar(l);
	}
	_putchar('\n');
}
