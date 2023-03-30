#include "lists.h"
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
	current_node->next = *head;
	*head = current_node;
	return (*head);
}
