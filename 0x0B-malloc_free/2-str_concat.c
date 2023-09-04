#include "main.h"

/**
 * str_concat - concatinate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string if success
 *         NULL if failed
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j = 0;
	char *s3;
	unsigned int l = sizeof(s1);
	unsigned int m = sizeof(s2);

	s3 = malloc((l + m) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < l; i++)
		s3[i] = s1[i];
	for (; j < m; i++)
	{
		s3[i] = s2[j];
		j++;
	}

	return (s3);
}
