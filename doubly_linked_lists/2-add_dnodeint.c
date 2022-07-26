#include "lists.h"
/**
 * add_nodeint - add a node to the begining
 * of the linked list
 * @head: pointer to head
 * @n: data
 * Return: node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;

	return (node);
}
