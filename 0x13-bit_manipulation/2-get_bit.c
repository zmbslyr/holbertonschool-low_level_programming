#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Integer to find the bit in
 * @index: Given index to find in n
 *
 * Return: Value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & 1 << index)
		return (1);
	return (0);
}
