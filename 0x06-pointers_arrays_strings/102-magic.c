#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print 98
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}