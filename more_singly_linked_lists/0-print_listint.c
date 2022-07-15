#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->n == 0)
		printf("0");
	else
		printf("%d\n", h->str);

	return (1 + print_list(h->next));
}
