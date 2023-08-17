#include <stdio.h>
#include "main.h"

/**
 * print_line - print a straght line
 *
 * @n: numer of times the _ char printed
 */

void print_line(int n)
{
	int num;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (num = 0; num < n; num++)
			_putchar('_');
		_putchar('\n');
	}
}
