#include "lists.h"

/**
 * print_dlistint -  a function that prints all the elements of a dlistint_t
 * @h: head
 * node count: counts numberof nodes
 *
 * Return: number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count;

	node_count = 0;

	if (h == NULL)
	return (node_count);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
	h = h->next;
	node_count++;
	}
	return (node_count);
}
