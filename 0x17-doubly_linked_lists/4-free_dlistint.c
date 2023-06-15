#include "lists.h"

/**
 * free_dlistint - function that frees dlinkedlist
 *
 * @head: the head of dlinkedlist
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
