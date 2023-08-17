#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: input size of square
 */

void print_square(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');
		_putchar('\n');
	}
}
