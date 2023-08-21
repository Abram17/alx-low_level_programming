#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: destination of copy
 * @src: pointer to copy from
 *
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}

	return (dest);
}
