#include "holberton.h"

/**
 * print_line - prints a line to user specified length
 * @n: user input for line length
 *
 * Return: Line to user length
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
