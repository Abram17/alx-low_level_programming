#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: program that prints numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
		printf("%i", n);
	printf("\n");

	return (0);
}
