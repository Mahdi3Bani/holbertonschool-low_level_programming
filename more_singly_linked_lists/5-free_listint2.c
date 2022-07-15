#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: The list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *A;

	while (head)
	{
		A = NULL;
		free(head);
		head = A;
	}
}
