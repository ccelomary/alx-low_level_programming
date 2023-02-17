#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always Success (0)
 */
int	main(void)
{
	int	i;

	i = 0;

	while (i <= 25)
	{
		putchar(97 + i++);
	}
	i = 0;
	while (i <= 25)
	{
		putchar(65 + i++);
	}
	putchar('\n');
	return (0);
}
