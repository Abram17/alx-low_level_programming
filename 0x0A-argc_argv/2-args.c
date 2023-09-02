#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all arguments it receives.
 *
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
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
