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
	while (i <= 25)
	{
		putchar(i + 97);
		i++;
	}
	putchar('\n');
	return (0);
}
