#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to allocated memory
 *         NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
