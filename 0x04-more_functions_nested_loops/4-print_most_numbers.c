#include "main.h"

/**
 * print_most_numbers - function prints number from 0 to 9 except 2 and 4
 *
 * Return: void nothing
 */

void	print_most_numbers(void)
{
	int	number;

	number = -1;
	while (++number < 10)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + 48);
	}
	_putchar('\n');
}

