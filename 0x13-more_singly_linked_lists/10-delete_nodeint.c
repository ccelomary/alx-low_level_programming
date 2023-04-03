#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes node from given index
 *
 * @head: head of the link list
 * @index: the position of the node
 * Return: -1(error) or 1 (success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t				*tmp;
	listint_t				*before;
	unsigned int			iter;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	iter = 1;
	before = *head;
	tmp = before->next;
	while (tmp)
	{
		if (index == iter)
		{
			before->next = tmp->next;
			free(tmp);
			return (1);
		}
		before = tmp;
		tmp = tmp->next;
		iter++;
	}
	return (-1);
}
