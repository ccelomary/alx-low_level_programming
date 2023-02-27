#include "main.h"
/**
 * puts_half - prints the second half of the string
 *
 * @str: the string prameter
 * Return: void
 */
void	puts_half(char *str)
{
	int	len;
	int	start;

	len = 0;
	while (str[len])
		len++;
	start = len / 2;
	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');

}
