#include "holberton.h"

/**
 * swap_int - swaps given integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
