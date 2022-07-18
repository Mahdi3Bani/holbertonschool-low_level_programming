#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: The list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *A;

	if (head == NULL)
		return;

	while (*head)
	{
		A = (*head)->next;
		free(*head);
		*head = A;
	}
}
