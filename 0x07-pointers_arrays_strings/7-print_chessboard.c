#include "main.h"
/**
 * print_chessboard - print cheess board of 2 dimensions
 *
 * @board: 2 dimensions array of characters
 * Return: void
 */
void	print_chessboard(char (*board)[8])
{
	int	row;
	int	col;

	row = 0;
	while (row < 8)
	{
		col  = 0;
		while (col < 8)
		{
			_putchar(board[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
