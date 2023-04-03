#include "lists.h"

/**
 * get_nodeint_at_index - function that returns node of given index
 *
 * @head: head of the linked list
 * @index: index to lookup for
 * Return: node for given index or NULL
 */
listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	current_index;

	current_index = 0;
	while (head)
	{
		if (current_index == index)
			return (head);
		head = head->next;
		current_index++;
	}
	return (NULL);
}
