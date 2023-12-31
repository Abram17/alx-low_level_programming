#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: input string
 * @accept: string to search for
 *
 * Return: pointer to byte in s
 *         null if not found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
