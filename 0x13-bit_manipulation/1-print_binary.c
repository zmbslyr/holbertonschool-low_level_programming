#include "holberton.h"

/**
 * print_binary - Prints the binary value of a number
 * @n: Integer to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >>= 1;
	}
}
