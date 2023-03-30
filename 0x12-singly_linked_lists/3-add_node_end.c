#include "lists.h"
/**
 * _strlen - function that return the length of given string
 *
 * @s: string to calcualte it's length
 * Return: length of the string
 */
static size_t	_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
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
	string = strdup(str);
	if (!string)
		return (NULL);
	current_node = malloc(sizeof(list_t));
	if (!current_node)
	{
		free(string);
		return (NULL);
	}
	current_node->len = slen;
	current_node->str = string;
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
