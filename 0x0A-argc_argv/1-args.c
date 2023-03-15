#include <stdio.h>
/**
 * main - entry level function prints length of argument passed
 *
 * @argc: args length
 * @argv: array of args
 * Return: 0 (Success)
 */
int	main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
