#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: input destination
 * @src: input source
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
