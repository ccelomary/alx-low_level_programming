#include "main.h"
/**
 * is_inset - check wether a character is inset of characters
 *
 * @c: character to lookup for
 * @s: the set of characters
 * Return: true if the c in s otherways false
 */
static int	is_inset(char c, char *s)
{
	int	iter;

	iter = 0;
	while (s[iter])
	{
		if (c == s[iter])
			return (1);
		iter++;
	}
	return (0);
}

/**
 * cap_string - function that captalize the string
 *
 * @str: string to be capitalized
 * Return: str
 */
char	*cap_string(char *str)
{
	int	iter;
	int	is_seperator;

	is_seperator = 1;
	iter = 0;
	while (str[iter])
	{
		if (str[iter] >= 'a' && str[iter] <= 'z' && is_seperator)
		{
			str[iter] = str[iter] - LOWER_UPPER_CASE_DIFFERENCE;
			is_seperator = 0;
		}
		if (str[iter] >= 'A' && str[iter] <= 'Z' && is_seperator)
			is_seperator = 0;
		is_seperator = is_inset(str[iter], ",;.!?\"(){} \t\n");
		iter++;
	}
	return (str);
}
