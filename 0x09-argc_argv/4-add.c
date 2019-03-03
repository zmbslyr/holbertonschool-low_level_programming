#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments given
 * @argv: Arguments given in integers
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y;

	y = 0;
	for (x = 1; x < argc; x++)
	{
		if (isNum(argv[x]) == 1)
		{
			y += atoi(argv[x]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", y);
	return (0);
}

/**
 * isNum - Uses 'isDigit' to check for an actual number
 * @num: Number passed in
 *
 * Return: 1 if digit is a number
 */
int isNum(char *num)
{
	while (*num)
	{
		if (isDigit(*num) == 0)
		{
			return (0);
		}
		num++;
	}
	return (1);
}

/**
 * isDigit - Checks if the char is a digit
 * @d: character being passed in
 *
 * Return: 1 if the char is a digit
 */
int isDigit(const char d)
{
	int x = d;

	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
