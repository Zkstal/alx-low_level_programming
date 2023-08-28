#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: point to the first node in the list
 * @n: data to insert in the new node
 *
 * Return: point to the new node else print NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
