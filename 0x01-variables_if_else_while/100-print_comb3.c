#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: Always Success (0)
 */
int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
