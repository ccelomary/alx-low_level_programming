#include "lists.h"

/**
 * find_listint_loop - function that find first occurence of loop
 *
 * @head: head linked list
 * Return: the address of first ouccrence of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	int			length;
	int			iter;
	listint_t	*before;
	listint_t	*next;

	length = 1;
	if (!head || !head->next)
		return (NULL);
	before = head;
	next = head->next;
	while (next)
	{
		before = head;
		iter = 0;
		while (iter < length)
		{
			if (before == next)
				return (next);
			iter++;
			before = before->next;
		}
		length++;
		next = next->next;
	}
	return (NULL);
}
