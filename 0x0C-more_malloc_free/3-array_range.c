#include "main.h"

/**
 * array_range - creates array if integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 *         NULL if min > max or malloc fails
*/

int *array_range(int min, int max)
{
	int n, i, j;
	int *ptr;

	n = max - min + 1;
	j = min;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL || min > max)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = j;
		j++;
	}
	return (ptr);
}
