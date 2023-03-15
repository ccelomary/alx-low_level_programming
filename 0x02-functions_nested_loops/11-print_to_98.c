#include "main.h"

void	print_to_98(int n)
{
	int	number;
	while (n <= 98)
	{
		number = n;
		if (n < 0)
		{
			_putchar('-');
			number *= -1;
		}
		if (number < 10)
			_putchar(number + 48);
		else
		{
			_putchar(number / 10 + 48);
			_putchar(number % 10 + 48);
		}
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
