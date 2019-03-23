#include "holberton.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: Size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int index, index2, temp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (index = 0; index < size; index++)
	{
		for (index2 = size - index; index2 > 1; index2--)
		{
			_putchar(' ');
		}
		for (temp = index + index2; temp >= 1; temp--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
