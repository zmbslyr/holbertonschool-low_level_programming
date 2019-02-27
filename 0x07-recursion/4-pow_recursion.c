#include "holberton.h"

/**
 * _pow_recursion - raised x to the power of y
 * @x: number to be raised
 * @y: power to raise to
 *
 * Return: Value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
