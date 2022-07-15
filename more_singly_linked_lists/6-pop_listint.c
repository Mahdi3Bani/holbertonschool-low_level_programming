#include "lists.h"
/**
 * pop_listint - delete the head node and return the node data
 * @head: the list
 */
int pop_listint(listint_t **head)
{
	listint_t *A;
	int n;

	if (!head)
		return (0);

	n = (*head)->n;
	A = (*head)->next;
	free(*head);
	*head = A;

	return (n);
}
