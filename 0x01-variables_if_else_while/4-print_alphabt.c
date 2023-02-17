#include <stdio.h>

/**
 *  main - Entry level
 *
 *  Return: Always Success (0)
 */
int	main(void)
{
	int	i;
	char	c;

	i = 0;
	while (i <= 25)
	{
		c = i + 97;
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
		i++;
	}
	putchar('\n');
	return (0);
}
