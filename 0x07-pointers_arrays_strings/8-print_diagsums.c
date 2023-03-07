#include "main.h"
/**
 * print_diagsums - take array of one dimension and calculate diagonal sum
 *
 * @a: pointer to the first address of the array
 * @size: number signifying the size of rows and cols in the array
 * Return: nothing(void)
 */
void	print_diagsums(int *a, int size)
{
	int	row;
	int	left_sum;
	int	right_sum;

	row = 0;
	left_sum = 0;
	right_sum = 0;
	while (row < size)
	{
		left_sum += *(a + row * size + row);
		right_sum += *(a + row * size + (size - row - 1));
		row++;
	}
	printf("%d, %d\n", left_sum, right_sum);
}
