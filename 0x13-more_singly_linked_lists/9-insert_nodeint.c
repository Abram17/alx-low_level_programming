#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 *
 * @head: pointer to pointer to the head of linked list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node.
 *
 * Return:  the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (i != idx - 1 && temp)
	{
		temp = temp->next;
		i++;
	}

	if (i == idx - 1 && temp)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
