#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * @s: input string
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
	{
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
