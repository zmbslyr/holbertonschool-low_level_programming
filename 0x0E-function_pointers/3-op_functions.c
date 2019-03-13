#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: First number
 * @b: second number
 *
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Result of two numbers
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of two numbers
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
