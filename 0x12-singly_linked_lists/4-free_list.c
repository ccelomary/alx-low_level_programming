#include "lists.h"
/**
 * free_list - function that free llist and it's content
 *
 * @head: head of the llist
 * Return: nothing(void)
 */
void	free_list(list_t *head)
{
	list_t	*tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
