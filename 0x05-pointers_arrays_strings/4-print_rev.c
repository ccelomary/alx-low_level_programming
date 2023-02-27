#include "main.h"

/**
 * print_rev - Print string in a reverse order
 *
 * @s: the string to print
 * Return: void
 */
void	print_rev(char *s)
{
	int	len;

	len = _strlen(s);
	while (--len >= 0)
		_putchar(s[len]);
	_putchar('\n');
}
