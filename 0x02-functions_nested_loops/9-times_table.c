#include "main.h"

void	times_table(void)
{
	int	i;
	int	j;
	int	number;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			number = i * j;
			if (number > 9)
			{
				_putchar(number / 10 + 48);
				_putchar(number % 10 + 48);
			}
			else
				_putchar(number + 48);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((j + 1) * i < 10)
				{
					_putchar(' ');
				}
			}
			else
				_putchar('\n');
		}
	}
}

