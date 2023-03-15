#include "main.h"

/**
 * create_array - function that creates array of characters
 *
 * @size: length of chars
 * @c: character to be init with
 * Return: NULL if size is 0 else array of characters
 */
char	*create_array(unsigned int size, char c)
{
	char		*array;
	unsigned int	iter;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	iter = 0;
	while (iter < size)
	{
		array[iter] = c;
		iter++;
	}
	return (array);
}
