#include "lists.h"
/**
 * free_listint - function to free a our memory from list content
 *
 * @head: head of linked list
 * Return: nothing
 */
void	free_listint(listint_t *head)
{
	listint_t		*tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
