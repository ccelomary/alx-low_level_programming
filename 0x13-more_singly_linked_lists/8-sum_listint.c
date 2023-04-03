#include "lists.h"
/**
 * sum_listint - function that return the sum of the list
 *
 * @head: head of the linked list(first node)
 * Return: sum of all integers inside of the linked list
 */
int			sum_listint(listint_t *head)
{
	int		total;

	total = 0;
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
