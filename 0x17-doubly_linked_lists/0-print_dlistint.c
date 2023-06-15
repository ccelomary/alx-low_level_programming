#include "lists.h"

/**
 * print_dlistint - function that prints dlistint content into stdout
 *
 * @h: head of dlinkedlist
 * Return: number of node in the given dlinkedlist
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num;

	node_num = 0;
	while (h)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
