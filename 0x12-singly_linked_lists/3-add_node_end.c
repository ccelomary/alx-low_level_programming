#include "lists.h"

/**
 * add_node_end - function that adds node to end of the llist
 *
 * @head: head of the llist
 * @str: the content of the llist
 * Return: new created node
 */
list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*current_node;
	list_t	*tmp;
	char	*string;
	size_t	slen;

	slen = _strlen(str);
	string = malloc(slen + 1);
	if (!string)
		return (NULL);
	current_node = malloc(sizeof(list_t));
	if (!current_node)
	{
		free(string);
		return (NULL);
	}
	current_node->len = slen;
	current_node->str = _strcpy(string, str);
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
