#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data in listint_t
 * @head: first node in the linked list
 *
 * Return: result of both
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
