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
	int n, i;
	int *ptr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
