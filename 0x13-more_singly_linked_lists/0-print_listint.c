#include "lists.h"

/**
 * print_listint - print all the elements of a linked list
 * @h: linked list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t noden = 0;

	while (h)
	{
		printf("%d\n", h->n);
		noden++;
		h = h->next;
	}

	return (noden);
}
