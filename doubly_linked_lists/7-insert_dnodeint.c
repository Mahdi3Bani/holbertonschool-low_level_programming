#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the list
 * @idx: index
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *vi = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; vi && (i < idx); i++)
	{
		if (i == idx - 1)
		{
			if (vi->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = vi->next;
			new->prev = vi;
			vi->next->prev = new;
			vi->next = new;
			return (new);
		}
		else
			vi = vi->next;
	}
	return (NULL);
}
