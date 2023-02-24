#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: dimention of diagnoal 2D
 * Return: nothing
 */
void	print_diagonal(int n)
{
	int	row;
	int	col;

	row = 0;
	if (n <= 0)
		_putchar('\n');
	while (row < n)
	{
		col = 0;
		while (col <= row)
		{
			_putchar(' ');
			col++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
}

