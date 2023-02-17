#include <stdio.h>


/**
 * putnumber - function that print number that consist of two digits
 *
 * @num:  a number which will be printed
 *
 * Return: nothing (void)
 */
void	putnumber(int num)
{
	putchar(num / 10 + 48);
	putchar(num % 10 + 48);
}

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
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			putnumber(i);
			putchar(' ');
			putnumber(j);
			if (i < 98 || j < 99)
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
