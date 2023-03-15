#include "main.h"

/**
 * main - Entry Point
 *
 * Return: success (0)
 */

void	print_alphabet(void)
{
	int	i;
	char 	*c = "abcdefghijklmnopqrstuvwxyz\n";

	i = -1;
	while (++i < 25)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
