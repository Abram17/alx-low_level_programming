#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C progarm that prints different combinations of two digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (i != j)
				putchar(i + 48);
				putchar(j + 48);
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
}
