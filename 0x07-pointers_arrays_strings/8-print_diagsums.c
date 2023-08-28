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
	int i, mainDiagonalSum, secondaryDiagonalSum;

	for (i = 0; i < size; i++)
	{
		mainDiagonalSum += *(a + i * size + i);
		secondaryDiagonalSum += *(a + i * size + (size - i - 1));
	}

	printf("Main diagonal sum: %d, %d\n", mainDiagonalSum, secondaryDiagonalSum);
}
