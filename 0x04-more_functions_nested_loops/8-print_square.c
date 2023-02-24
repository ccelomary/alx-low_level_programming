#include "main.h"

/**
 * print_square - prints square of size
 *
 * @size: number dimenstion of the square
 * Return: nothing
 */
void	print_square(int size)
{
	int	row;
	int	col;

	row = -1;
	if (size <= 0)
		_putchar('\n');
	while (++row < size)
	{
		col = -1;
		while (++col < size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

