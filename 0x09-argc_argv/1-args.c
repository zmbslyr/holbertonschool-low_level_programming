#include <stdio.h>

/**
 * main - Prints the number of command line arguments given
 * @argc: Number of arguments given
 * @argv: Array of string values of arguments
 * 
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    if (argc > 0)
    {
        printf("%d\n", argc - 1);
        return (0);
    }
}