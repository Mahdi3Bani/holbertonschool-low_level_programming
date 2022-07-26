#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: first node in the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
