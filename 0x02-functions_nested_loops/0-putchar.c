#include "main.h"

/**
 * main: putchar
 *
 * Return: success 0
 */
int	main(void)
{
	int	i;
	char	*c = "_putchar\n";

	i = -1;
	while (++i < 9)
		_putchar(c[i]);
	return (0);
}
