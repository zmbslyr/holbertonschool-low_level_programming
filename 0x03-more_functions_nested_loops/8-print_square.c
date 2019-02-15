#include "holberton.h"

/**
 * print_square - Prints a square
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
