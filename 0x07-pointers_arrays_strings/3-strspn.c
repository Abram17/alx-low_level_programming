#include "main.h"

/**
 * _strspn - gets the length if prefix substring
 *
 * @s: input string
 * @accept: string containing list of char
 *
 * Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && s[i] != ',')
			{
				count++;
				continue;
			}
			if (s[i] == ',')
			{
				break;
			}
		}
	}
}
