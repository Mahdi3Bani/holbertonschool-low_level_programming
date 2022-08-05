#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + dlistint_len(h->next));
}
