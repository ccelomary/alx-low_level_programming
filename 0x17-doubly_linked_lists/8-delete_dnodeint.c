#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node inside of the
 * dlinkedlist based on given index
 *
 * @head: the head of dlinkedlist
 * @index: index to delete node from
 * Return: 1(success), -1(error)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int iterator;

	if (!head || !*head)
		return (-1);
	if (index == 0 && head && *head)
	{
		tmp = (*head)->next;
		if (tmp)
			tmp->prev = NULL;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp = *head;
	iterator = 0;
	while (tmp)
	{
		if (iterator == index)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		iterator++;
		tmp = tmp->next;
	}
	return (-1);
}
