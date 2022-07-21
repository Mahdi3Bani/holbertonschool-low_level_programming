#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->n == 0)
		printf("0\n");
	else
		printf("%d\n", h->n);

	return (1 + print_dlistint(h->next));
}
