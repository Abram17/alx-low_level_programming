#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0-9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + 48);
	_putchar('\n');
}
