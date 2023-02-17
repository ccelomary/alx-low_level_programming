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
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
