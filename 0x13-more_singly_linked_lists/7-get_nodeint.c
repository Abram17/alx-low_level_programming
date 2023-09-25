#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 *
 * @head: pointer to the head of linked list.
 * @index: index of the node, starting at 0.
 *
 * Return:  and returns the nth node or NULL if node is non-existent.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i  = 0;

	if (!head)
		return (NULL);

	while (i < index && head)
	{
		head = head->next;
		i++;
	}
	return (head);
}
