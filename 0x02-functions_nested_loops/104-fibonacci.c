#include "main.h"

/**
 * numlength - rturns number length
 *
 * @num: operand number
 *
 * Return: number of digits
 */

int numlength(int num)
{
	int length = 0;
	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description: first 98 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int count, ini;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, flo = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
		ini = numlength(mx) - 1 - numlength(f1);
		while (flo > 0 && ini > 0)
		{
			printf("%d", 0);
			ini--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % max;
		sumo = flo + f2o + (f1 + f2) / mx;
		f1 =f2;
		flo = f20;
		f2 = sum;
		f2o = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
