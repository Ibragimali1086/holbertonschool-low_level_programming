#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index at which to insert new node (starts at 0)
 * @n: integer value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (!current)  /* idx is out of bounds */
		return (NULL);

	if (!current->next)  /* insert at the end */
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}
