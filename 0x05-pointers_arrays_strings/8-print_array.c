#include "main.h"

/**
 * print_array - function that prints the number inside of array
 *
 * @a: numbers to print
 * @n: length of the number
 */
void	print_array(int *a, int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		if (index + 1 < n)
			printf(", ");
		index++;
	}
	printf("\n");
}
