#include "lists.h"

/**
 * _strcpy - function that copies src into dest
 *
 * @dest: string that will receive characters
 * @src: string that will  send characters
 * Return: dest
 */
char	*_strcpy(char *dest, const char *src)
{
	size_t		iter;

	iter = 0;
	while (src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = 0;
	return (dest);
}
