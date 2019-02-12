#include "holberton.h"

/**
 * print_sign - determines if the number is positive, negative, or zero
 * @n: string
 * Return: 1 if greater, 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
