#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n integers from an array, followed by a new line
 * @a: array to print integers from
 * @n: index to print up to
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index < n -1)
			printf("%d, ", a[index]);
		else
			printf("%d\n", a[index]);
	}
}
