#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0 (success)
 *         1 (fail)
*/

int main(int argc, char *argv[])
{
	int x, i, j, k, l, m, n, o, p, q;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		i = x / 25;
		j = x % 25;
		k = j / 10;
		l = j % 10;
		m = l / 5;
		n = l % 5;
		o = n / 2;
		p = n % 2;
		q = p / 1;
		if (x < 0)
		{
			printf("0\n");
		}
		else
		{
			if (j == 0)
			{
				printf("%d\n", i);
			}
			else
			{
				if (l == 0)
				{
					printf("%d\n", i + k);
				}
				else
				{
					if (n == 0)
					{
						printf("%d\n", i + k + m);
					}
					else
					{
						if (p == 0)
						{
							printf("%d\n", i + k + m + o);
						}
						else
						{
							printf("%d\n", i + k + m + o + q);
						}
					}
				}
			}
		}
		return (0);
	}
}
