#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C progarm that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;
	char c;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

return (0);
}
