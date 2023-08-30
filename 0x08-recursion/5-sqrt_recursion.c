#include "main.h"

/**
 * _sqrt_recursion - calculate natural sqrt of a num
 *
 * @n: input number
 *
 * Return: square root of n
*/

int _sqrt_recursion(int n)
{
	int guess = 0;

	return (squareRoot(n, guess));
}

/**
 * squareRoot - calculate
 *
 * @n: number
 * @guess: guessed sqrt
 *
 * Return: sqrt
*/
int squareRoot(int n, int guess)
{
	if (guess ^ 2 == n)
	{
		return (guess);
	}
	if (guess ^ 2 < n)
	{
		return (squareRoot(n, guess + 1));
	}
	else
	{
		return (-1);
	}
}
