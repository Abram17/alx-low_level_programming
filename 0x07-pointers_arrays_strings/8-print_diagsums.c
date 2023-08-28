#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 *
 * @a: input matrix
 * @size: size of input matrix
*/

void print_diagsums(int *a, int size)
{
	int i, j, diag1, diag2;

	diag1 = 0;
	diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				diag1 += *a[i][j];
			}
			if (j == size - i - 1)
			{
				diag2 += *a[i][j];
			}
		}
	}
	printf("%d, %d", diag1, diag2);
}
