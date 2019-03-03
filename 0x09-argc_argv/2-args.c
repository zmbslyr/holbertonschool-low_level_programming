#include <stdio.h>

/**
 * main - prints all arguments given to program
 * @argc: Number of arguments given
 * @argv: String values of arguments given
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
