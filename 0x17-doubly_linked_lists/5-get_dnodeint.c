#include "lists.h"
/**
 * get_dnodeint_at_index - function that retrieves node based
 * on given index
 *
 * @head: head of dlinkedlist
 * @index: index of the node to be retrieved
 * Return: node that corresponds to given index, null if index
 * out of dlinkedlist range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iterator;

	iterator = 0;
	while (head)
	{
		if (iterator == index)
			return (head);
		head = head->next;
		iterator++;
	}
	return (NULL);
}
