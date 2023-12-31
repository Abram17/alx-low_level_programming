#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of elements
 *
 * Return: pointer to the allocated memory
 *         NULL if failed
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
