#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lower and uppercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
