#include "lists.h"

/**
 * pop_listint - function that remove the last node of the list
 *
 * @head: head of the linked list
 * Return: int
 */
int			pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int			value;

	if (!*head)
		return (0);
	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;
	return (value);
}
