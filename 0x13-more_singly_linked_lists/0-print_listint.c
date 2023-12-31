#include "lists.h"

/**
 * print_listint - prints a list
 *
 * @h: pointer to the first node
 *
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
