#include "lists.h"
/**
 * _strlen - function that return the length of given string
 *
 * @s: string to calcualte it's length
 * Return: length of the string
 */
size_t	_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
