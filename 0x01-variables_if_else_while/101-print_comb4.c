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
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i == 7 && j == 8 && k == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);
}
