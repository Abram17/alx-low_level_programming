#include <stdio.h>
#include "main.h"

/**
 * puts_half -  prints half of a string
 *
 * @str: input string
 */

void puts_half(char *str)
{
	for (i = 0; str[i] != '\0'; ++i)
		;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
