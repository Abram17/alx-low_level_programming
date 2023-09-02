#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: program that multiplies two numbers.
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 *         1 (fail)
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		mult = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
		printf("%d\n", mult);
		return (0);
	}
}
