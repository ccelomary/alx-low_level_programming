#include "main.h"

/**
 * more_numbers - prints number from 0 to 14
 *
 * Return: nothing
 */

#define TIMES 10
void	more_numbers(void)
{
	int	number;
	int	time;

	time = -1;
	while (++time < TIMES)
	{
		number = -1;
		while (++number < 15)
		{
			if (number > 9)
			{
				_putchar(number / 10 + 48);
			}
			_putchar(number % 10 + 48);
		}
		_putchar('\n');
	}
}

