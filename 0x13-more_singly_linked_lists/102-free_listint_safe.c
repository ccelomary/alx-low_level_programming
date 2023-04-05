#include "lists.h"

/**
 * find_cycle - function that find the occur of next cycle
 *
 * @h: head of linked list
 * Return: -1 in case no cycle found else length before cycle happens
 */
int		find_cycle(listint_t *h)
{
	int			length;
	int			iter;
	listint_t	*before;
	listint_t	*next;

	length = 1;
	if (!h || !h->next)
		return (-1);
	before = h;
	next = h->next;
	while (next)
	{
		before = h;
		iter = 0;
		while (iter < length)
		{
			if (before == next)
				return (length);
			iter++;
			before = before->next;
		}
		length++;
		next = next->next;
	}
	return (-1);
}
/**
 * free_listint_safe - function that free linkedlist and looped list
 *
 * @h: head of the linked list
 * Return: return
 */
size_t		free_listint_safe(listint_t **h)
{
	size_t		length;
	int			iter, next_cycle;
	listint_t	*tmp, *next;

	if (!h)
		return (0);
	length = 0;
	next_cycle = find_cycle(*h);
	iter = 0;
	while (*h)
	{
		if (next_cycle == iter)
		{
			break;
		}
		tmp = (*h)->next;
		free(*h);
		length++;
		iter++;
		*h = tmp;
	}
	*h = NULL;
	return (length);
}
