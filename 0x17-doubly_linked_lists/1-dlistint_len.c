#include "lists.h"

/**
 * dlistint_len - counts the length of the given dlinkedlist
 *
 * @h: head of the dlinkedlist
 * Return: number of the nodes in the given dlinkedlist(length)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
