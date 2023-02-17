#include <stdio.h>

/**
 *  main - Entry level
 *
 *  Return: Always Success (0)
 */
int	main(void)
{
	int	i;

	i = 25;
	while (i >= 0)
	{
		putchar(i + 97);
		i--;
	}
	putchar('\n');
	return (0);
}
