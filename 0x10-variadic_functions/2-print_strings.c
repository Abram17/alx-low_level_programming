#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: the string to be printed between strings
 * @n: number if strings passed
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
			break;
		}

		if (i == n - 1)
		{
			printf("%s\n", str);
		}
		else
			printf("%s%s ", str, separator);
	}

	va_end(args);
}
