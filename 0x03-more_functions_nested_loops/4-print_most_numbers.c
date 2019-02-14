#include "holberton.h"

/**
 * print_most_numbers - prints all numbers from 0-9 except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x >= 0 && x < 10)
	{
		if (x != 2)
		{
			if (x != 4)
			{
				_putchar(x + '0');
			}
		}
		x++;
	}
	_putchar('\n');
}
