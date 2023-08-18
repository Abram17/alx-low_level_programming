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

	if (n > 0)
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (space = 1; space <= pos; space++)
				_putchar(' ');
			_putchar('\\');
			if (pos == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
