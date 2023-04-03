#include "lists.h"
/**
 * listint_len - function returns length of list
 *
 * @h: head of the linked list
 * Return: length
 */
size_t	listint_len(const listint_t *h)
{
	size_t		len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
