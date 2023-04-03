#include "lists.h"

/**
 * print_listint - function that prints given list
 *
 * @h: list to print it's content
 * Return: length of printed element
 */
size_t		print_listint(const listint_t *h)
{
	size_t		len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
