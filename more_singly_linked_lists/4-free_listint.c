#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: The list to free
 */
void free_listint(listint_t *head)
{
	listint_t *A;

	while (head)
	{
		A = head->next;
		free(head);
		head = A;
	}
}