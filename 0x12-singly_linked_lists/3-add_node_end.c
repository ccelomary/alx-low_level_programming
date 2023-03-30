#include "lists.h"

/**
 * add_node_end - function that adds node to end of the llist
 *
 * @head: head of the llist
 * @string: the content of the llist
 * Return: new created node
 */
list_t	*add_node_end(list_t **head, const char *string)
{
	list_t	*current_node;
	list_t	*tmp;
	char	*str;
	size_t	slen;

	slen = _strlen(string);
	str = malloc(slen + 1);
	if (!str)
		return (NULL);
	current_node = malloc(sizeof(list_t));
	if (!current_node)
	{
		free(str);
		return (NULL);
	}
	current_node->len = slen;
	current_node->str = _strcpy(str, string);
	current_node->next = NULL;
	if (!*head)
		*head = current_node;
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = current_node;
	}
	return (current_node);
}
