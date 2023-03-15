#include <stdio.h>
#include <stdlib.h>
/**
 * main - function prints the results of multiplication of two numbers
 *
 * @argc: length args
 * @argv: array args
 * Return: 0 success or 1 error
 */
int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
