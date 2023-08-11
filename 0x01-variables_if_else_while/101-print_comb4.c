#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C progarm that prints different combinations of three digits.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j && i != k && j != k)
				{
					putcahr(i + 48);
					putchar(j + 48);
					putcahr(k + 48);
					putcahr(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
