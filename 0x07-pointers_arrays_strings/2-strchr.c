#include "main.h"
/**
 * _strchr - returns pointer to the first occur of character c or NULL
 *
 * @s: buffer to look for character in
 * @c: the character to lookup for
 * Return: pointer to first occurence or null
 */
char	*_strchr(char *s, char c)
{
	unsigned int	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			return (s + index);
		index++;
	}
	return (NULL);
}
