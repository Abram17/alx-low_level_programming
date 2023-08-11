#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C prints the alphabet in lowercase except q and e.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
