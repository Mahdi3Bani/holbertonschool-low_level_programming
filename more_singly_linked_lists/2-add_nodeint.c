#include "lists.h"
/**
 * add_nodeint - add a node to the begining
 * of the linked list
 * @head: pointer to head
 * @n: data
 * Return: node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (node->n == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = *head;
	*head = node;

	return (node);
}
