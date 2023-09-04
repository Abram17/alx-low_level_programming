#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: input string
 *
 * Return: pointer to copy of string
 *         NULL if str = NULL or if insufficient memory
*/

char *_strdup(char *str)
{
	int i;
	int size = strlen(str);
	char *ptr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
