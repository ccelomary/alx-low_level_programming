#include "main.h"

/**
 * print_triangle - prints triangle of length size
 *
 * @size: length of the triangle
 * Return: nothing
 */
void	print_triangle(int size)
{
	int	row;
	int	col;

	row = -1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	while (++row < size)
	{
		col = 0;
		while (col < size - row - 1)
		{
			_putchar(' ');
			col++;
		}
		while (col < size)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
	}
}

