#include "lists.h"

/**
 * add_nodeint - function that insert given int to the beginning of the list
 *
 * @head: list
 * @n: number
 * Return: new created node or NULL in case of error
 */
listint_t	*add_nodeint(listint_t **head, const int n)
{
	listint_t	*node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
