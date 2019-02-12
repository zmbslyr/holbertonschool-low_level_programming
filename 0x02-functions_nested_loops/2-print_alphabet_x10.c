#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet 3 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 1;

	while (i <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
		a = 'a';
	}
}
