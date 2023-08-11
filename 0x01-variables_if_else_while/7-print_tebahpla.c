#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C progarm that prints alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
