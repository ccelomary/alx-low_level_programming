#include "lists.h"
/**
 * list_len - function that return the length of the linked list
 *
 * @h: head of the link list
 * Return: length of the link list
 */
size_t		list_len(const list_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
