#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int x, y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
