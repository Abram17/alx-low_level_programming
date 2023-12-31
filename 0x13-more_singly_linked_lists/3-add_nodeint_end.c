#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 *
 * @head: pointer to the first node
 *@n: value of the new node
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;

	return (new);
}
