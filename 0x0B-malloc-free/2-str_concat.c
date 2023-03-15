#include "main.h"
/**
 * str_concat - functions that concat two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: s1 concatented with s2 or NULL in case of error
 */
char	*str_concat(char *s1, char *s2)
{
	char	*concat;
	int	len;
	int	iter;

	iter = 0;
	len = 0;
	while (s1 && s1[iter])
	{
		iter++;
		len++;
	}
	iter = 0;
	while (s2 && s2[iter])
	{
		len++;
		iter++;
	}
	concat = malloc(sizeof(char) * (len + 1));
	if (!concat)
		return (NULL);
	iter = 0;
	len = 0;
	while (s1 && s1[iter])
	{
		concat[len] = s1[iter];
		iter++;
		len++;
	}
	iter = 0;
	while (s2 && s2[iter])
	{
		concat[len] = s2[iter];
		iter++;
		len++;
	}
	concat[len] = 0;
	return (concat);
}
