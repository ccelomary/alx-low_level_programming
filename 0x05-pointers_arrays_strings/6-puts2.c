#include "main.h"

/**
 * puts2 -  function that prints character with even index
 *
 * @s: string to print
 * Return: void
 */
void	puts2(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = _strlen(s);
	while (i < len)
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}
