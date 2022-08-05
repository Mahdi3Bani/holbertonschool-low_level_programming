#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end
 * @head: pointer to head
 * @n: data
 * Return: node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *node_p = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;

	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	while (node_p->next != NULL)
		node_p = node_p->next;

	node_p->next = node;
	node->prev = node_p;
	return (node);
}
