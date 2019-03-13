#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Calculator program
 * @argc: Number of arguments given
 * @argv: Arguments given in string form
 *
 * Return: 0 if Success || 98 if fail
 */
int main(int argc, char **argv)
{
	int value;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	value = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", value);
	return (0);
}
