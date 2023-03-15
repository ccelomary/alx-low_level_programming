#include "main.h"


void	jack_bauer(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 24)
	{
		j = -1;
		while (++j < 60)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
