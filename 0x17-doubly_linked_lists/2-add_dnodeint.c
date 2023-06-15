#include "lists.h"

/**
 * add_dnodeint - function that adds new node at the beginning of
 * dlinkedlist
 *
 * @head: head of the dlinkedlist
 * @n: number the integer that will be inserted as
 * the content of the node
 * Return: new created node, null if an error happened
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
