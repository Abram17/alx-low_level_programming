#include "main.h"

/**
 * factorial - calculate factorial
 *
 * @n: input number
 *
 * Return: -1 if the number < 0
 *         factorial if num is valid
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
