#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the number of arguments passed into it.
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
