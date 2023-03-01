#include "main.h"
/**
 * string_toupper - function that trurn all lowercase to uppercase
 *
 * @str: string to convert
 * Return: str
 */
char	*string_toupper(char *str)
{
	int	iter;

	iter = -1;
	while (str[++iter])
	{
		if (str[iter] < 'a' || str[iter] > 'z')
			continue;
		str[iter] = str[iter] - LOWER_UPPER_CASE_DIFFERENCE;
	}
	return (str);
}
