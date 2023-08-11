#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints all the alphabet.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
