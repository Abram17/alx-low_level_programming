#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: times the char \ printed
 */

void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 0; pos < n; pos++)
		{
			for (space = 0; space < pos; space++)
			{
				putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
