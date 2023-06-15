#include "lists.h"

/**
 * sum_dlistint - function that returns sum of numbers
 * inside of dlinkedlist
 *
 * @head: head of dlinkedlist
 * Return: sum of numbers inside of given dlinkedlist
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
