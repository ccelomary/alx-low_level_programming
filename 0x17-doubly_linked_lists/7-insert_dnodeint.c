#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts given number(n)
 * at given index(idx)
 *
 * @h: head of dlinkedlist
 * @idx: index to insert new node into
 * @n: number to be inserted as content of the node
 * Return: new inserted node or null if an error happened
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int iterator;
	dlistint_t *tmp, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	iterator = 0;
	while (tmp)
	{
		if (iterator == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp;
			new_node->prev = tmp->prev;
			tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
		iterator++;
		tmp = tmp->next;
	}
	if (iterator == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
