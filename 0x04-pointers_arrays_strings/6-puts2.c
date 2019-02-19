#include "holberton.h"

/**
 * puts2 - prints every other character
 * @str: input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int x;
	char l;

	for (x = 0; str[x] != 0; x++)
	{
		if (x % 2 == 0)
		{
			l = str[x];
			_putchar(l);
		}
	}
	_putchar('\n');
}
