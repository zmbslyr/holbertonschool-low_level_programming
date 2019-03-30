#include "holberton.h"

/**
 * flip_bits - Finds number of bits to flip to get from n to m
 * @n: Number to compare against
 * @m: Number to compare
 *
 * Return: Number of bits that have to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int x;

	x = n ^ m;
	count = 0;
	while (x > 0)
	{
		if ((x & 1) != 0)
			count++;
		x = x >> 1;
	}
	return (count);
}
