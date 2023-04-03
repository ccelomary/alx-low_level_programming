#include "lists.h"

/**
 * insert_at_index_helper - function that insert the given number at the end
 *
 * @head: head of the link list
 * @node: node to insert inside of the list
 * @idx: position to put node in
 * Return: node or NULL (error)
 */
listint_t	*insert_at_index_helper(listint_t **head, listint_t *node,
										unsigned int idx)
{
	unsigned int	index;
	listint_t		*before;
	listint_t		*tmp;

	index = 1;
	before = *head;
	tmp = before->next;
	while (tmp)
	{
		if (index == idx)
		{
			node->next = tmp;
			before->next = node;
			return (node);
		}
		index++;
		before = tmp;
		tmp = tmp->next;
	}
	if (index == idx)
	{
		before->next = node;
		return (node);
	}
	return (NULL);
}
/**
 * insert_nodeint_at_index - function that adds new element at given index
 *
 * @head: first element of the linked list
 * @idx: index to put new number at
 * @n: the number that will be added to linked list
 * Return: the inserted node or NULL (error)
 */
listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t		*node;
	listint_t		*tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head && idx == 0)
	{
		*head = node;
		return (node);
	}
	if (!*head && idx != 0)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = insert_at_index_helper(head, node, idx);
	if (!tmp)
		free(node);
	return (NULL);
}
