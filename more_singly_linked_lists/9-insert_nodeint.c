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
	listint_t *t;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	t = *head;
	while (i < (index - 1) && t->next)
	{
		t = t->next;
		i++;
	}
	if (i < index - 1)
		return (NULL);

	new->next = t->next;
	t->next = new;

	return (new);
}
