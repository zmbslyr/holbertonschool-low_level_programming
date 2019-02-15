#include <stdio.h>
#include "holberton.h"

/**
 * main - runs FizzBuzz test
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num, x, y;

	for (num = 1; num <= 100; num++)
	{
		x = 0;
		y = 0;
		if ( num % 3 == x && num % 5 == y)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == x)
		{
			printf("Fizz ");
		}
		else if (num % 5 == x)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
