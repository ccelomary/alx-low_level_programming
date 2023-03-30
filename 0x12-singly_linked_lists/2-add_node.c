#include "lists.h"
/**
 * add_node - function that adds new node to the start of the llist
 *
 * @head: head of llist
 * @string: string to enter as data
 * Return: new added node or null
 */
list_t		*add_node(list_t **head, const char *string)
{
	list_t	*current_node;
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
	current_node->next = *head;
	*head = current_node;
	return (*head);
}
