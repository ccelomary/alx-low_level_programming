#include "lists.h"
/**
 * free_listint2 - function that free list from memory
 *
 * @head: head of the linked list
 * Return: nothing
 */
void	free_listint2(listint_t **head)
{
	listint_t	*tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
