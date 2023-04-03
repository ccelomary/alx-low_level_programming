#include "lists.h"

/**
 * add_nodeint_end - function that adds number into the end of the list
 *
 * @head: head of the list
 * @n: number to be added
 * Return: created node or NULL in case of error
 */
listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*node;
	listint_t	*tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
