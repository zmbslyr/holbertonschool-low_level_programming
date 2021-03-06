#include "holberton.h"

/**
 * clear_bit - Sets the value of bit at index to 0
 * @n: Integer to change bit in
 * @index: Index to change
 *
 * Return: 1 (Success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	mask = ~(1 << index);
	*n &= mask;
	return (1);
}
