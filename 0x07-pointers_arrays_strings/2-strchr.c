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
	int i;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
