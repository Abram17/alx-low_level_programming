#include "lists.h"

/**
 * listint_len - prints length of list
 *
 * @h: pointer to the first node
 *
 * Return: size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
