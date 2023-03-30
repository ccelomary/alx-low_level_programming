#include "lists.h"

/**
 * print_list - function that print elements inside of linked list
 *
 * @h: head of the link list
 * Return: the length of the linklist
 */
size_t	print_list(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}

