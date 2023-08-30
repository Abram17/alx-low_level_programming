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
	return (squareRoot(n, 1));
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
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess < n)
	{
		return (squareRoot(n, guess + 1));
	}
	else
	{
		return (-1);
	}
}
