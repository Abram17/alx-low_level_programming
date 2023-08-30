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
	int len;

	len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		len++;
	}

	return (len);
}
