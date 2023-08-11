#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C progarm that prints all possible combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		putchar(d + 48);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
