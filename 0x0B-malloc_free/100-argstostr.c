#include "main.h"

/**
 * argstostr - cocatinate args
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: pointer to a new string if success
 *         NULL if failed
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, length, current;

	length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ptr[current] = av[i];
		current += strlen(av[i]);
		ptr[current] = '\n';
		current++;
	}
}
