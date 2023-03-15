#include "main.h"
/**
 * _strdup - function that duplicate given string
 *
 * @str: string to be duplicated
 * Return: pointer to duplicated string NULL in case of error
 */
char	*_strdup(char *str)
{
	char	*dup;
	int	len;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	len = 0;
	while (str[len])
	{
		dup[len] = str[len];
		len++;
	}
	dup[len] = 0;
	return (dup);
}
