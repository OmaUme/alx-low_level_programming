#include "lists.h"

/**
 * dlistint_len - a function that returns the
 * number of elements in a linked dlistint_t
 * @h: head
 *
 * Return: number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
