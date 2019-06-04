#include "holberton.h"

/**
 * set_bit - Sets a bit to 1 at a given index
 * @n: Integer to change bit in
 * @index: Index to change bit at
 *
 * Return: 1 (Success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
	{
		return (-1);
	}
	*n = *n | 1 << index;
	return (1);
}
