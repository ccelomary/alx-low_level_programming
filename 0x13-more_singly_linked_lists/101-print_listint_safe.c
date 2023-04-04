#include "lists.h"

/**
 * where_cycle_end - function that returns the position where the cycle occur
 *
 * @head: head linkedlist
 * Return: position where cycle occur -1 if no cycle occur
 */
int			where_cycle_end(const listint_t *head)
{
	int			current_length;
	int			iter;
	listint_t	*previous;
	listint_t	*current;

	if (!head || !head->next)
		return (-1);
	current_length = 1;
	previous = (listint_t *)head;
	current = head->next;
	while (current)
	{
		previous = (listint_t *)head;
		iter = 0;
		while (iter < current_length)
		{
			if (previous == current)
			{
				return (current_length);
			}
			iter++;
			previous = previous->next;
		}
		current_length++;
		current = current->next;
	}
	return (-1);
}
/**
 * print_listint_safe - function that prints what's (address, value) each node
 *
 * @head: head of the linked list
 * Return: number of element printed
 */
size_t		print_listint_safe(const listint_t *head)
{
	int			iter;
	size_t		printed_len;
	int			position;

	iter = 0;
	printed_len = 0;
	position = where_cycle_end(head);
	while (head)
	{
		if (iter == position)
		{
			printf("-> [%p] %d\n", head, head->n);
			exit(98);
		}
		printf("[%p] %d\n", head, head->n);
		printed_len++;
		iter++;
		head = head->next;
	}
	return (printed_len);
}
