#include "lists.h"
/**
 * sum_listint - prints the sum all the elements of a list_t list
 * @head: pointer to the head
 * Return: the number of nodes
 */
size_t sum_listint(const listint_t *head)
{
	int sum = 0;
	listint_t *A = head;

	while (A)
	{
		sum += A->n;
		A = A->next;
	}

	return (sum);
}
