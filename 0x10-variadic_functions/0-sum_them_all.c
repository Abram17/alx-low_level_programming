#include <variadic_functions.h>

/**
 * sum_them_all - sum of all the parameters
 *
 * @n: number of parameters
 *
 * Return: the sum if success
 *         0 if n = 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}

	va_end(args);
}
