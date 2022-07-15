#include "lists.h"
/**
 * listint_len - number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (1 + listint_len(h->next));
}
