#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the list
 * @idx: index
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *vi = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; vi && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = vi->next;
			vi->next = new;
			return (new);
		}
		else
			vi = vi->next;
	}

	return (NULL);
}
