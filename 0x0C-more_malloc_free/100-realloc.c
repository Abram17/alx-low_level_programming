#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: previosly allocated
 * @old_size: old size
 * @new_size: new size
 *
 * Return: ptr if success
 *         NULL if failed
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new;
	char *old;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	old = new;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}
