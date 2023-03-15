#include "main.h"
/**
 * _puts - printing the string followed by new line
 *
 * @str: string to print
 * Return: void
 */
void	_puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
