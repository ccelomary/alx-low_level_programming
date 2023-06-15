#include "lists.h"

/**
 * add_dnodeint_end - function that adds new node at the end of the
 * dlinkedlist
 *
 * @head: the head of dlinkedlist
 * @n: content of new node (integer)
 * Return: new created node, null if error happened
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
