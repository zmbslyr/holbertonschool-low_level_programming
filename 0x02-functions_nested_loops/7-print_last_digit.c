#include "holberton.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: integer
 *
 * Return: last digit of a number
 */
int print_last_digit(int i)
{
	int n;

	if (i >= 0)
	{
		n = i % 10;
	}
	else if (i == INT_MIN)
	{
		n = ((i- 1) % 10) + 1;
	}
	else
	{
		n = (-i) % 10;
	}
	_putchar (n + '0');
	return (n);
}
