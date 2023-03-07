#include "main.h"
/**
 * _strstr - function that looks for first occurence of given string
 *
 * @haystack: the string to search in
 * @needle: the string to search for
 * Return: first occurence of thet needle in haystack
 */
char	*_strstr(char *haystack, char *needle)
{
	int	iter;
	int	is_found;

	while (*haystack)
	{
		iter =  0;
		is_found = 1;
		while (needle[iter])
		{
			if (!*(haystack + iter)
					|| *(haystack + iter) != needle[iter])
			{
				is_found = 0;
				break;
			}
			iter++;
		}
		if (is_found)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
