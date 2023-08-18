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
			for (space = 1; space <= size; space++)
			{
				if ((hight + space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
