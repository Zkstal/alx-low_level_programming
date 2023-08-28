#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: point to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: point to the new node else NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodene;
	listint_t *temp = *head;

	nodene = malloc(sizeof(listint_t));
	if (!nodene)
		return (NULL);

	nodene->n = n;
	nodene->next = NULL;

	if (*head == NULL)
	{
		*head = nodene;
		return (nodene);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nodene;

	return (nodene);
}
