#include "holberton.h"

/**
 * factorial - finds the factorial of a number
 * @n: Integer
 *
 * Return: Factorial of a number (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
