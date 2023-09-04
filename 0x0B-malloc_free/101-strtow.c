#include "main.h"

/**
 * strtow - splits a string
 *
 * @str: input string
 *
 * Return: pointer to new string
 *         NULL if failed
*/

char **strtow(char *str)
{
	int i;
	char *ptr;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == " ")
			ptr[i] = '\n';
		else
			ptr[i] = str[i];
	}
	return (ptr);
}
