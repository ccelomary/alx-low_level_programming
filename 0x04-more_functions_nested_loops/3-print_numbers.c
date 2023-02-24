#include "main.h"

/**
 * print_numbers - function that print number from 0-9
 *
 * Return: void nothing
 */
void	print_numbers(void)
{
	int	number;

	number = 0;
	while (number < 10)
	{
		_putchar(number + 48);
		number++;
	}
	_putchar('\n');
}

