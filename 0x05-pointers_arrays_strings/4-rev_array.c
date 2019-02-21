#include "holberton.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to array to reverse
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, temp;

	n = n - 1;
	x = 0;
	while (x < n)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
		n--;
	}
}
