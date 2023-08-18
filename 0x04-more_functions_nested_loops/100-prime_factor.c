#include <stdio.h>

/**
 * _sqrt - find the square root
 *
 * @x: input
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}

	return (sqrt);
}

/**
 * lpm - finds the largest prime factor
 *
 * @num: input
 */

void lpm(long int num)
{
	int prm, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prm = 3; prm <= _sqrt(num); prm += 2)
	{
		while (num % prm == 0)
		{
			num = num / prm;
			largest = prm;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	lpm(612852475143);

	return (0);
}
