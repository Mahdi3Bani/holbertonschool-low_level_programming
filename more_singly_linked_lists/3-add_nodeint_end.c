#include "lists.h"

/**
 * add_nodeint_end - add a node to the end
 * @head: pointer to head
 * @n: data
 * Return: node
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *node_p = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (node->n == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (node_p->next != NULL)
		node_p = node_p->next;

	node_p->next = node;

	return (node);
}