#include <stdio.h>

/**
 *  main - Entry level
 *
 *  Return: Always Success (0)
 */
int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
