#include <stdio.h>
#include <stdlib.h>
/**
 * is_number - function checks wether given string is number
 *
 * @s: string
 * Return: true if the number else false
 */
int	is_number(char *s)
{
	int	iter;

	iter = 0;
	while (s[iter])
	{
		if ('0' > s[iter] || s[iter] > '9')
			return (0);
		iter++;
	}
	return (1);
}
/**
 * main - prints function that print total of given numbers
 *
 * @argc: length args
 * @argv: array of args
 * Return: 1 error or 0 success
 */
int	main(int argc, char *argv[])
{
	int	iter;
	int	total;

	iter = 1;
	total = 0;
	while (iter < argc)
	{
		if (!is_number(argv[iter]))
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[iter]);
		iter++;
	}
	printf("%d\n", total);
	return (0);
}
