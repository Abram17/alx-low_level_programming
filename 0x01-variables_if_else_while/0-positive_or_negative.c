#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Entry point
	*
	* Description: A C program that generates a random number then tells it's type
	*
	* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", &n);
	else if (n > 0)
		printf("%d is positive\n", &n);
	else if (n == 0)
		printf("%d is zero\n", &n);

	return (0);
}
