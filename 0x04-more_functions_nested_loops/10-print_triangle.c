#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a trianglr
 *
 * @size: input size
 *
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int hight, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
