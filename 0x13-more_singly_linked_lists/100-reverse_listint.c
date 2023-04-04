#include "lists.h"

/**
 * reverse_listint - function that reverses linkedlist
 *
 * @head: the head of linkedlist
 * Return: reverse linkedlist
 */
listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*before;
	listint_t	*tmp;
	listint_t	*next;

	if (!head)
		return (NULL);
	before = NULL;
	next = *head;
	while (next)
	{
		tmp = next->next;
		next->next = before;
		before = next;
		next = tmp;
	}
	*head = before;
	return (*head);
}
