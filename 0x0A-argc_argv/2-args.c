#include <stdio.h>
/**
 * main - function that prints passed arguments
 *
 * @argc: args length
 * @argv: array of arrgs
 * Return: success
 */
int	main(int argc, char *argv[])
{
	int	iter;

	iter = 0;
	while (iter < argc)
	{
		printf("%s\n", argv[iter]);
		iter++;
	}
	return (0);
}
