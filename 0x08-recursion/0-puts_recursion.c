#include "main.h"
/**
 * _puts_recursion - function that prints the given string followed by newline
 *
 * @s: string to print
 * Return: nothing(void)
 */
void	_puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
