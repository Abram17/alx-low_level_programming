#include "main.h"

/**
 * _abs - function that prints the absolute value
 *
 * @n: takes integer input to function
 *
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
