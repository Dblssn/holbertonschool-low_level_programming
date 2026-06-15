#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head pointer
 * @idx: index where the new node should be added
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		if (tmp)
			tmp->prev = new;
		*h = new;
		return (new);
	}

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	new->prev = tmp;

	if (tmp->next)
		tmp->next->prev = new;

	tmp->next = new;

	return (new);
}
