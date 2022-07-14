#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: The list to free
 */
void free_list(list_t *head)
{
	list_t *A;

	while (head)
	{
		A = head->next;
		free(head->str);
		free(head);
		head = A;
	}
}
