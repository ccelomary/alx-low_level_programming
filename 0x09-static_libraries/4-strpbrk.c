#include "main.h"
/**
 * is_inset - function check wether character c is in set or not
 *
 * @c: character to lookup for
 * @set: set of character to search from
 * Return: true if c found in set else false
 */
static int is_inset(char c, char *set)
{
	int index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}
/**
 * _strpbrk - function that locates first occurence of any of the bytes
 *
 * @s: string to search in
 * @accept: string to match with
 * Return: pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (is_inset(s[index], accept))
			return (s + index);
		index++;
	}
	return (NULL);
}
