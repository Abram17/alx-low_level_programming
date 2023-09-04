#include "main.h"

/**
 * create_array - creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @size: size of array
 * @c: characters
 *
 * Return: NULL if size = 0 or fail
 *         pointer to the array if size != 0
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	return (arr);
}
