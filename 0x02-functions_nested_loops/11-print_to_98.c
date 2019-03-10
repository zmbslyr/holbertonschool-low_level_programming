#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - counts to 98
 * @n: integer
 *
 * Return: count to 98 from x
 */
void print_to_98(int n)
{
	int count;

	if (n < 98)
	{
		for (count = n; count < 98; count++)
		{
			printf("%d, ", count);
		}
	}
	else if (n > 98)
	{
		for (count = n; count > 98; count--)
		{
			printf("%d, ", count);
		}
	}
	printf("%d\n", 98);
}
