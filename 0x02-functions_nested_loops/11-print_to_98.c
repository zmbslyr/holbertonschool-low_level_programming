#include "holberton.h"
#include <stdio.h>

/**
 * count_to_98 - counts to 98
 * @x: integer
 * Return: count to 98 from x
 */
void print_to_98(int x)
{
	while (x < 98)
	{
		printf("%d, ", x++);
	}
	while (x > 98)
	{
		printf("%d, ", x--);
	}
       	printf("%d", x);
	printf("\n");
}
