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
 * add_node - function that adds new node to the start of the llist
 *
 * @head: head of llist
 * @str: string to enter as data
 * Return: new added node or null
 */
list_t		*add_node(list_t **head, const char *str)
{
	list_t	*current_node;
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
	current_node->next = *head;
	*head = current_node;
	return (*head);
}
