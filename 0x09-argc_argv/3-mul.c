#include <stdio.h>
#include <stdlib.h>

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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	y = 1;
	for (x = 1; x < argc; x++)
	{
		y *= atoi(argv[x]);
	}
	printf("%d\n", y);
	return (0);
}
