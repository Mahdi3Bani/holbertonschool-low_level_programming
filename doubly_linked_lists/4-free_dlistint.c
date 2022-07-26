#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: The list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *A;

	while (head)
	{
		A = head->next;
		free(head);
		head = A;
	}
}
