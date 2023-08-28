#include "main.h"

/**
 * _strchr - locates char in string
 *
 * @s: input string
 * @c: char to find
 *
 * Return: pointer to c if existing
 *		   null if not
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
}
