#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: program that adds positive numbers.
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 *         1 (fail)
*/

int main(int argc, char *argv[])
{
	int i, sum, temp, x;
	char *ptr;

	sum = 0;

	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			x = isdigit(*ptr);
			if (x == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				continue;
			}
		}

		for (i = 1; i < argc; i++)
		{
			temp = strtol(argv[i], NULL, 10);
			if (temp >= 0)
			{
				sum += temp;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
